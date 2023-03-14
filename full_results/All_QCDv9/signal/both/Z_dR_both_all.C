#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Thu Mar  9 13:09:06 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(-1.310117,-0.6840502,7.029799,5.016368);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetLeftMargin(0.15709);
   Z_dR_both_all->SetRightMargin(0.1234783);
   Z_dR_both_all->SetBottomMargin(0.12);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.446326);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0);
   st_stack_148->SetMaximum(4.446326);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetTitleOffset(1);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Event/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetTitleSize(0.037);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetTitleOffset(1);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,1.610447);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,2.407069);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,2.41633);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,2.123007);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,1.501531);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,1.065503);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,0.8213219);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,0.6468689);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,0.5875556);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,0.6982539);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,0.7149438);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,0.8213065);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,1.058438);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,0.9310762);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,0.3819312);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,0.1579349);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,0.07614602);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,0.03984118);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,0.02746729);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,0.02323341);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,0.009150893);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,0.004869908);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,0.002358174);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,0.06663908);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,0.07810409);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,0.08259489);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,0.08478109);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,0.06149824);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,0.05169561);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,0.04536349);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,0.04447091);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,0.03792815);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,0.0420144);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,0.04331922);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,0.04530414);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,0.05215855);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,0.04896348);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,0.0308708);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,0.01961603);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,0.0131843);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,0.009719367);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,0.008505383);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,0.01221082);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,0.004825562);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,0.003469898);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,0.002358174);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.0005272769);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,0.5723072);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,1.18593);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,1.27412);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,1.045492);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,0.6749698);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,0.3812368);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,0.2572723);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,0.2217859);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,0.2244064);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,0.2504381);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,0.2914089);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,0.3223106);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,0.3578964);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,0.367976);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,0.1640252);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,0.07011251);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,0.0444909);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,0.02862759);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,0.01186692);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,0.01078209);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,0.004832143);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,0.002497987);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,0.001341284);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,0.0001839373);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,0.0006978566);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.0004046273);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,0.01426413);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,0.01982048);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,0.02050238);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,0.01942299);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,0.01469786);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,0.01122995);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,0.009126796);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,0.008395753);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,0.008532734);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,0.008969638);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,0.00975663);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,0.01037376);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,0.0107884);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,0.01172572);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,0.008119361);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,0.004654518);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,0.003798895);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,0.003014324);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,0.001902029);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,0.001818615);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,0.001181935);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,0.0008847723);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,0.0006993259);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,0.0001839373);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,0.0004946311);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}

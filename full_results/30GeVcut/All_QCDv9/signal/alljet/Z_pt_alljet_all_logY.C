#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_alljet_all_logY()
{
//=========Macro generated from canvas: Z_pt_alljet_all/Z_pt_alljet_all
//=========  (Tue Feb 14 16:07:57 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_alljet_all = new TCanvas("Z_pt_alljet_all", "Z_pt_alljet_all",0,0,600,600);
   Z_pt_alljet_all->SetHighLightColor(2);
   Z_pt_alljet_all->Range(37.97653,-0.2418648,1705.96,6.041322);
   Z_pt_alljet_all->SetFillColor(0);
   Z_pt_alljet_all->SetFillStyle(4000);
   Z_pt_alljet_all->SetBorderMode(0);
   Z_pt_alljet_all->SetBorderSize(2);
   Z_pt_alljet_all->SetLogy();
   Z_pt_alljet_all->SetLeftMargin(0.15709);
   Z_pt_alljet_all->SetRightMargin(0.1234783);
   Z_pt_alljet_all->SetBottomMargin(0.12);
   Z_pt_alljet_all->SetFrameFillStyle(1000);
   Z_pt_alljet_all->SetFrameBorderMode(0);
   Z_pt_alljet_all->SetFrameFillStyle(1000);
   Z_pt_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(141425.4);
   
   TH1F *st_stack_204 = new TH1F("st_stack_204","",40,0,2000);
   st_stack_204->SetMinimum(3.251754);
   st_stack_204->SetMaximum(258823.4);
   st_stack_204->SetDirectory(0);
   st_stack_204->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_204->SetLineColor(ci);
   st_stack_204->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_204->GetXaxis()->SetRange(7,30);
   st_stack_204->GetXaxis()->SetLabelFont(42);
   st_stack_204->GetXaxis()->SetTitleOffset(1);
   st_stack_204->GetXaxis()->SetTitleFont(42);
   st_stack_204->GetYaxis()->SetTitle("Events/50.0");
   st_stack_204->GetYaxis()->SetLabelFont(42);
   st_stack_204->GetYaxis()->SetTitleSize(0.037);
   st_stack_204->GetYaxis()->SetTitleFont(42);
   st_stack_204->GetZaxis()->SetLabelFont(42);
   st_stack_204->GetZaxis()->SetTitleOffset(1);
   st_stack_204->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_204);
   
   
   TH1D *VbbHcc_alljet_Z_pt_all_stack_1 = new TH1D("VbbHcc_alljet_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(1,1414.254);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(2,980.5733);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(3,143.2914);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(4,30.40882);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(5,9.741265);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(6,3.606798);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(7,1.461374);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(8,0.6543804);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(9,0.2866772);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(10,0.1081053);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(11,0.09657068);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(12,0.04343722);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(13,0.0491206);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(14,0.01227385);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(15,0.01039719);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(16,0.01490316);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(17,0.001870372);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinContent(19,0.001639841);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(1,2.002859);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(2,1.650911);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(3,0.6411873);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(4,0.28139);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(5,0.1597018);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(6,0.09558467);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(7,0.06298772);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(8,0.0407548);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(9,0.02710567);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(10,0.01674976);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(11,0.01553419);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(12,0.01051372);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(13,0.01101044);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(14,0.005721217);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(15,0.005370898);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(16,0.006714343);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(17,0.001870372);
   VbbHcc_alljet_Z_pt_all_stack_1->SetBinError(19,0.001639841);
   VbbHcc_alljet_Z_pt_all_stack_1->SetEntries(1193419);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_pt_all_stack_2 = new TH1D("VbbHcc_alljet_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(1,138.2819);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(2,152.928);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(3,53.70623);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(4,16.9919);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(5,5.586186);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(6,1.925526);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(7,0.6802308);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(8,0.2784478);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(9,0.1050004);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(10,0.04010914);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(11,0.01865472);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(12,0.00578348);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(13,0.004399221);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(14,0.001427334);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(15,0.001321502);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(16,0.0003193896);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(17,0.0003186975);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(18,0.0004199154);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinContent(28,0.0002612132);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(1,0.2197646);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(2,0.2298335);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(3,0.1378903);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(4,0.07541118);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(5,0.04385966);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(6,0.02570065);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(7,0.01482623);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(8,0.009528379);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(9,0.005840904);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(10,0.003552921);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(11,0.002378138);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(12,0.001344122);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(13,0.001193396);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(14,0.0006491682);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(15,0.0006678972);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(16,0.0002490911);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(17,0.0003186975);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(18,0.0004199154);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_alljet_Z_pt_all_stack_2->SetBinError(28,0.0002612132);
   VbbHcc_alljet_Z_pt_all_stack_2->SetEntries(1223268);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_pt_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_alljet_all->Modified();
   Z_pt_alljet_all->cd();
   Z_pt_alljet_all->SetSelected(Z_pt_alljet_all);
}

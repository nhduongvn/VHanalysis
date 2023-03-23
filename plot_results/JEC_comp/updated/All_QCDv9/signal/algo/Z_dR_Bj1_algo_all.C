#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_all = new TCanvas("Z_dR_Bj1_algo_all", "Z_dR_Bj1_algo_all",0,0,600,600);
   Z_dR_Bj1_algo_all->SetHighLightColor(2);
   Z_dR_Bj1_algo_all->Range(-1.310117,-0.1293334,7.029799,0.9484448);
   Z_dR_Bj1_algo_all->SetFillColor(0);
   Z_dR_Bj1_algo_all->SetFillStyle(4000);
   Z_dR_Bj1_algo_all->SetBorderMode(0);
   Z_dR_Bj1_algo_all->SetBorderSize(2);
   Z_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.840667);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0);
   st_stack_152->SetMaximum(0.840667);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_152->GetXaxis()->SetRange(1,30);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetTitleOffset(1);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Event/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,0.3518433);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,0.5155642);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,0.3462311);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,0.1331235);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,0.07722151);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.03696659);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.01746355);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.01973931);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.02999711);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.009056012);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.0210833);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.009987788);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.01333752);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.01314829);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.004315259);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,0.02739464);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,0.03348859);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,0.0272327);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,0.01710538);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,0.01295712);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,0.008706629);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,0.005958482);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,0.006378292);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,0.008147518);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,0.004179598);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,0.0065421);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,0.004531188);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,0.004760194);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,0.005052331);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,0.003158712);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(781);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,0.09089977);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,0.1821893);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,0.1208819);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.06038297);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.02311317);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.01021475);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.008080748);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.006317922);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.007066223);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.008646292);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.005636823);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.004887849);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.004299475);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.001971104);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.00202905);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.0008069192);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.0007148681);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,0.005029018);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,0.007123098);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,0.005821785);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,0.004135451);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,0.002562398);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,0.001656766);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,0.001534702);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,0.001291057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,0.001445518);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,0.001538662);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,0.00128773);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,0.001180729);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,0.00112857);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,0.0007569781);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,0.0007290934);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,0.0004718988);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,0.0004195169);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(20,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(2012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   Z_dR_Bj1_algo_all->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->SetSelected(Z_dR_Bj1_algo_all);
}

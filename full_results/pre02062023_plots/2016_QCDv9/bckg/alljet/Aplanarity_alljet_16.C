#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_16()
{
//=========Macro generated from canvas: Aplanarity_alljet_16/Aplanarity_alljet_16
//=========  (Wed Jan 18 11:43:14 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_16 = new TCanvas("Aplanarity_alljet_16", "Aplanarity_alljet_16",0,0,600,600);
   Aplanarity_alljet_16->SetHighLightColor(2);
   Aplanarity_alljet_16->Range(-0.2183529,-1.497117e+11,1.171633,1.097886e+12);
   Aplanarity_alljet_16->SetFillColor(0);
   Aplanarity_alljet_16->SetFillStyle(4000);
   Aplanarity_alljet_16->SetBorderMode(0);
   Aplanarity_alljet_16->SetBorderSize(2);
   Aplanarity_alljet_16->SetLeftMargin(0.15709);
   Aplanarity_alljet_16->SetRightMargin(0.1234783);
   Aplanarity_alljet_16->SetBottomMargin(0.12);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   Aplanarity_alljet_16->SetFrameFillStyle(1000);
   Aplanarity_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.731261e+11);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0);
   st_stack_253->SetMaximum(9.731261e+11);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetTitle("Aplanarity");
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetTitleOffset(1);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Events/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetTitleSize(0.037);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetTitleOffset(1);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(0,5179.752);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,6.487376e+11);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,5.502457e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,2.096082e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,1.034663e+10);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,5.771249e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,3.4505e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,2.167037e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,1.384947e+09);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,9.061014e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,5.998643e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,3.970282e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,2.635212e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,1.721491e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.104033e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,7.119468e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,4.380412e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,2.631306e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,1.546139e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,7836685);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,4049954);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,1556688);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,542537.1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,133543.3);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(24,39787.95);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(0,2508.205);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,1.020531e+08);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,2.940603e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,1.814231e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,1.274659e+07);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,9522882);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,7364580);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,5843523);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,4668774);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,3779529);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,3076190);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,2503610);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,2040897);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,1650104);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,1319297);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,1062615);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,834501.9);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,647208.8);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,497189.5);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,351037.9);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,253555);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,157652.2);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,92503.77);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,44450.77);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(24,25817.59);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(1.983153e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(0,1.631898);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,1.31491e+07);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,5595388);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,3346047);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,2203830);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,1520282);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,1076740);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,772454.7);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,558200.3);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,404009.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,291528.5);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,208574.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,147835.1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,103238.6);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,70810.23);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,47130.19);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,30498.55);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,19037.14);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,11221.94);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,6186.946);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,3131.451);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,1378.287);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(22,514.4144);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,137.264);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,21.9061);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(25,0.5476762);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(0,0.3225388);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,910.536);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,603.7242);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,469.0119);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,381.4716);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,317.2343);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,267.2364);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,226.4873);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,192.6088);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,163.9296);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,139.2927);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,117.8549);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,99.25203);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,82.94989);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,68.71719);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,56.0663);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,45.10886);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,35.64459);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,27.3739);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,20.31824);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,14.45749);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,9.592591);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(22,5.865134);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,3.021782);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,1.221692);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(25,0.1885351);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(5.003913e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_16->Modified();
   Aplanarity_alljet_16->cd();
   Aplanarity_alljet_16->SetSelected(Aplanarity_alljet_16);
}

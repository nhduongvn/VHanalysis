#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_bckg_18_logY()
{
//=========Macro generated from canvas: CvB_jets_bckg_18/CvB_jets_bckg_18
//=========  (Wed Mar  1 14:06:39 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_bckg_18 = new TCanvas("CvB_jets_bckg_18", "CvB_jets_bckg_18",0,0,600,600);
   CvB_jets_bckg_18->SetHighLightColor(2);
   CvB_jets_bckg_18->Range(-0.2183529,4.494318,1.171633,15.11424);
   CvB_jets_bckg_18->SetFillColor(0);
   CvB_jets_bckg_18->SetFillStyle(4000);
   CvB_jets_bckg_18->SetBorderMode(0);
   CvB_jets_bckg_18->SetBorderSize(2);
   CvB_jets_bckg_18->SetLogy();
   CvB_jets_bckg_18->SetLeftMargin(0.15709);
   CvB_jets_bckg_18->SetRightMargin(0.1234783);
   CvB_jets_bckg_18->SetBottomMargin(0.12);
   CvB_jets_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_bckg_18->SetFrameBorderMode(0);
   CvB_jets_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(2709689);
   st->SetMaximum(4.610626e+13);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",20,0,1);
   st_stack_24->SetMinimum(587094.7);
   st_stack_24->SetMaximum(1.127837e+14);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_24->GetXaxis()->SetRange(1,20);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.05");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,2.035937e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,3.604995e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,2.706806e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,2.776745e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,3.037813e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,3.446911e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,4.051569e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,4.959196e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,6.470053e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,8.869927e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,1.211797e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,1.701312e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,2.551137e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,3.821159e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,6.308367e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,1.099283e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,2.16176e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,4.610363e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,3.38469e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,2.838085e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,2.220085e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,9349940);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,7890910);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,8088561);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,8442762);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,8866766);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,9689457);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,1.087168e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,1.246983e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,1.452305e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,1.697327e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,2.0135e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,2.48348e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,3.030197e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,3.894263e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,5.187404e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,7.271962e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,1.071898e+08);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,9.406518e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,2.66437e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(6.404607e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_stack_2 = new TH1D("VbbHcc_jets_CvB_stack_2","",20,0,1);
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,3.146031e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,4461281);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,2883004);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,2516739);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,2288156);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,2056657);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,1972617);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,1965430);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,2132532);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,2302819);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,2500426);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,2856059);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,3622198);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,4612176);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,6385875);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,9209794);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,1.492519e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,2.625106e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,2.754176e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,4876847);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1651.092);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,618.8681);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,497.9142);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,465.6781);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,443.2302);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,421.2161);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,412.5412);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,412.2114);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,428.5203);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,445.524);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,464.4507);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,497.3692);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,560.4496);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,632.4574);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,745.3995);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,898.9868);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,1149.572);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1545.727);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1610.462);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,680.1013);
   VbbHcc_jets_CvB_stack_2->SetEntries(2.225893e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_bckg_18->Modified();
   CvB_jets_bckg_18->cd();
   CvB_jets_bckg_18->SetSelected(CvB_jets_bckg_18);
}

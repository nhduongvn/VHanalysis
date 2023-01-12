#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_17_logY()
{
//=========Macro generated from canvas: CvL_jets_all_17/CvL_jets_all_17
//=========  (Mon Dec 19 11:02:05 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_17 = new TCanvas("CvL_jets_all_17", "CvL_jets_all_17",0,0,600,600);
   CvL_jets_all_17->SetHighLightColor(2);
   CvL_jets_all_17->Range(-0.2183529,4.960372,1.171633,16.18287);
   CvL_jets_all_17->SetFillColor(0);
   CvL_jets_all_17->SetFillStyle(4000);
   CvL_jets_all_17->SetBorderMode(0);
   CvL_jets_all_17->SetBorderSize(2);
   CvL_jets_all_17->SetLogy();
   CvL_jets_all_17->SetLeftMargin(0.15709);
   CvL_jets_all_17->SetRightMargin(0.1234783);
   CvL_jets_all_17->SetBottomMargin(0.12);
   CvL_jets_all_17->SetFrameFillStyle(1000);
   CvL_jets_all_17->SetFrameBorderMode(0);
   CvL_jets_all_17->SetFrameFillStyle(1000);
   CvL_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(9801107);
   st->SetMaximum(4.53905e+14);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",20,0,1);
   st_stack_114->SetMinimum(2028020);
   st_stack_114->SetMaximum(1.149804e+15);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_114->GetXaxis()->SetRange(1,20);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.05");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,1.005143e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,4.538915e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1.084165e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,2.637021e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,1.17649e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,6.879274e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,4.304938e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,2.970262e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,2.293092e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,1.847443e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,1.504801e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,1.255584e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,1.10571e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,1.012317e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,9.797835e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,9.983959e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,1.062788e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,1.276832e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,1.702692e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,4.492907e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.24029e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.675003e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.305e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,6.416618e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,4.280495e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,3.271199e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,2.585401e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,2.14608e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,1.885716e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,1.691643e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,1.524983e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,1.391708e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,1.304414e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.247196e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.225126e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.234899e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,1.271505e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,1.392965e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,1.607082e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,2.609185e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.890565e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,4.133604e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.347556e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,3.790757e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.222754e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,6768955);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,4696759);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,3559649);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,2927646);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,2638587);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,2508848);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,2460725);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,2472908);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,2624217);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,2868599);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,3272760);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3901971);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,4789042);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,6357757);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,8963889);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.013456e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,1647.418);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,2997.69);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1592.945);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,907.7283);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,673.8735);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,561.4665);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,488.9043);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,443.134);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,420.4014);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,409.6705);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,405.4302);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,406.1409);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,418.0014);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,436.7719);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,466.2701);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,508.8662);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,563.4143);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,648.8684);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,770.4209);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,1159.122);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(5.230086e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_17->Modified();
   CvL_jets_all_17->cd();
   CvL_jets_all_17->SetSelected(CvL_jets_all_17);
}

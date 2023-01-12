#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_18()
{
//=========Macro generated from canvas: CvB_jets_18/CvB_jets_18
//=========  (Mon Dec 19 11:02:46 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_18 = new TCanvas("CvB_jets_18", "CvB_jets_18",0,0,600,600);
   CvB_jets_18->SetHighLightColor(2);
   CvB_jets_18->Range(-0.2183529,-2.08786e+11,1.171633,1.531097e+12);
   CvB_jets_18->SetFillColor(0);
   CvB_jets_18->SetFillStyle(4000);
   CvB_jets_18->SetBorderMode(0);
   CvB_jets_18->SetBorderSize(2);
   CvB_jets_18->SetLeftMargin(0.15709);
   CvB_jets_18->SetRightMargin(0.1234783);
   CvB_jets_18->SetBottomMargin(0.12);
   CvB_jets_18->SetFrameFillStyle(1000);
   CvB_jets_18->SetFrameBorderMode(0);
   CvB_jets_18->SetFrameFillStyle(1000);
   CvB_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.357109e+12);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",20,0,1);
   st_stack_15->SetMinimum(0);
   st_stack_15->SetMaximum(1.357109e+12);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_15->GetXaxis()->SetRange(1,20);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetTitleOffset(1);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Events/0.05");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_jets_CvB_stack_1 = new TH1D("VbbHcc_jets_CvB_stack_1","",20,0,1);
   VbbHcc_jets_CvB_stack_1->SetBinContent(1,3.854886e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(2,8.252897e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(3,6.409591e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(4,6.585394e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(5,7.534754e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(6,8.823273e+09);
   VbbHcc_jets_CvB_stack_1->SetBinContent(7,1.069926e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(8,1.337176e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(9,1.765303e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(10,2.54378e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(11,3.544811e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(12,5.064656e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(13,7.467846e+10);
   VbbHcc_jets_CvB_stack_1->SetBinContent(14,1.092603e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(15,1.7537e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(16,2.934142e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(17,5.274436e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(18,9.047022e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(19,5.15961e+11);
   VbbHcc_jets_CvB_stack_1->SetBinContent(20,3.189447e+10);
   VbbHcc_jets_CvB_stack_1->SetBinError(1,3.184629e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(2,1.438954e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(3,1.288332e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(4,1.300896e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(5,1.394871e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(6,1.509113e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(7,1.655235e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(8,1.850098e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(9,2.14439e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(10,2.542214e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(11,3.007394e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(12,3.61433e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(13,4.393244e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(14,5.318678e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(15,6.783431e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(16,8.83395e+07);
   VbbHcc_jets_CvB_stack_1->SetBinError(17,1.186727e+08);
   VbbHcc_jets_CvB_stack_1->SetBinError(18,1.556836e+08);
   VbbHcc_jets_CvB_stack_1->SetBinError(19,1.182352e+08);
   VbbHcc_jets_CvB_stack_1->SetBinError(20,2.807088e+07);
   VbbHcc_jets_CvB_stack_1->SetEntries(8.05601e+08);

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
   VbbHcc_jets_CvB_stack_2->SetBinContent(1,3.772813e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(2,5740669);
   VbbHcc_jets_CvB_stack_2->SetBinContent(3,3767235);
   VbbHcc_jets_CvB_stack_2->SetBinContent(4,3325854);
   VbbHcc_jets_CvB_stack_2->SetBinContent(5,3095280);
   VbbHcc_jets_CvB_stack_2->SetBinContent(6,2837738);
   VbbHcc_jets_CvB_stack_2->SetBinContent(7,2777913);
   VbbHcc_jets_CvB_stack_2->SetBinContent(8,2837167);
   VbbHcc_jets_CvB_stack_2->SetBinContent(9,3152105);
   VbbHcc_jets_CvB_stack_2->SetBinContent(10,3494940);
   VbbHcc_jets_CvB_stack_2->SetBinContent(11,3869875);
   VbbHcc_jets_CvB_stack_2->SetBinContent(12,4510870);
   VbbHcc_jets_CvB_stack_2->SetBinContent(13,5797127);
   VbbHcc_jets_CvB_stack_2->SetBinContent(14,7629872);
   VbbHcc_jets_CvB_stack_2->SetBinContent(15,1.067118e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(16,1.512346e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(17,2.331022e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(18,3.705903e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(19,3.403022e+07);
   VbbHcc_jets_CvB_stack_2->SetBinContent(20,5098341);
   VbbHcc_jets_CvB_stack_2->SetBinError(1,1835.026);
   VbbHcc_jets_CvB_stack_2->SetBinError(2,712.6058);
   VbbHcc_jets_CvB_stack_2->SetBinError(3,577.1433);
   VbbHcc_jets_CvB_stack_2->SetBinError(4,542.4282);
   VbbHcc_jets_CvB_stack_2->SetBinError(5,522.2431);
   VbbHcc_jets_CvB_stack_2->SetBinError(6,500.9803);
   VbbHcc_jets_CvB_stack_2->SetBinError(7,495.2529);
   VbbHcc_jets_CvB_stack_2->SetBinError(8,500.0958);
   VbbHcc_jets_CvB_stack_2->SetBinError(9,525.9907);
   VbbHcc_jets_CvB_stack_2->SetBinError(10,553.9499);
   VbbHcc_jets_CvB_stack_2->SetBinError(11,583.2737);
   VbbHcc_jets_CvB_stack_2->SetBinError(12,631.9454);
   VbbHcc_jets_CvB_stack_2->SetBinError(13,717.5851);
   VbbHcc_jets_CvB_stack_2->SetBinError(14,823.19);
   VbbHcc_jets_CvB_stack_2->SetBinError(15,977.4789);
   VbbHcc_jets_CvB_stack_2->SetBinError(16,1170.296);
   VbbHcc_jets_CvB_stack_2->SetBinError(17,1462.239);
   VbbHcc_jets_CvB_stack_2->SetBinError(18,1867.944);
   VbbHcc_jets_CvB_stack_2->SetBinError(19,1820.882);
   VbbHcc_jets_CvB_stack_2->SetBinError(20,706.6496);
   VbbHcc_jets_CvB_stack_2->SetEntries(2.99246e+09);

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
   CvB_jets_18->Modified();
   CvB_jets_18->cd();
   CvB_jets_18->SetSelected(CvB_jets_18);
}

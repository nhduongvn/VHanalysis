#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_18()
{
//=========Macro generated from canvas: CvL_jets_all_18/CvL_jets_all_18
//=========  (Mon Dec 19 11:02:48 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_18 = new TCanvas("CvL_jets_all_18", "CvL_jets_all_18",0,0,600,600);
   CvL_jets_all_18->SetHighLightColor(2);
   CvL_jets_all_18->Range(-0.2183529,-1.415565e+12,1.171633,1.038081e+13);
   CvL_jets_all_18->SetFillColor(0);
   CvL_jets_all_18->SetFillStyle(4000);
   CvL_jets_all_18->SetBorderMode(0);
   CvL_jets_all_18->SetBorderSize(2);
   CvL_jets_all_18->SetLeftMargin(0.15709);
   CvL_jets_all_18->SetRightMargin(0.1234783);
   CvL_jets_all_18->SetBottomMargin(0.12);
   CvL_jets_all_18->SetFrameFillStyle(1000);
   CvL_jets_all_18->SetFrameBorderMode(0);
   CvL_jets_all_18->SetFrameFillStyle(1000);
   CvL_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.201174e+12);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",20,0,1);
   st_stack_115->SetMinimum(0);
   st_stack_115->SetMaximum(9.201174e+12);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_115->GetXaxis()->SetRange(1,20);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.05");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetTitleSize(0.037);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,1.469897e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,6.133926e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1.433481e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,3.623359e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,1.619065e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,9.400729e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,5.847068e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,4.023687e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,3.098416e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,2.496152e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,2.046358e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,1.719092e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,1.523828e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,1.409243e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,1.369966e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,1.402225e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,1.510045e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,1.819437e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,2.422041e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,6.298609e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,2.004818e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,3.975964e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.906025e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,9.706208e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,6.492802e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,4.98807e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,3.942979e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,3.279769e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,2.866512e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,2.577746e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,2.345885e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,2.168772e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,2.033439e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.961546e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.926281e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.959118e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,2.031929e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,2.231072e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,2.553237e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,4.183406e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.858216e+09);

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
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,6.260425e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.899789e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,5.289213e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.766845e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,9824096);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,6807903);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,5165659);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,4255006);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,3842830);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,3660924);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,3597275);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,3620957);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,3852158);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,4217922);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,4816888);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,5747109);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,7053379);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,9344627);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,1.310846e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.88909e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,2380.888);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,4014.746);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,2117.863);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,1243.468);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,929.3603);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,774.7884);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,677.8062);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,614.8674);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,584.5179);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,571.453);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,565.7308);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,567.3517);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,586.5369);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,613.459);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,654.8237);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,715.7453);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,793.2652);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,913.7484);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,1085.612);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,1625.462);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(6.389881e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_18->Modified();
   CvL_jets_all_18->cd();
   CvL_jets_all_18->SetSelected(CvL_jets_all_18);
}

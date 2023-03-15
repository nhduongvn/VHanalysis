#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all()
{
//=========Macro generated from canvas: CSV_jets_all/CSV_jets_all
//=========  (Mon Dec 19 11:02:46 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all = new TCanvas("CSV_jets_all", "CSV_jets_all",0,0,600,600);
   CSV_jets_all->SetHighLightColor(2);
   CSV_jets_all->Range(-0.2183529,-1.261097e+12,1.171633,9.248045e+12);
   CSV_jets_all->SetFillColor(0);
   CSV_jets_all->SetFillStyle(4000);
   CSV_jets_all->SetBorderMode(0);
   CSV_jets_all->SetBorderSize(2);
   CSV_jets_all->SetLeftMargin(0.15709);
   CSV_jets_all->SetRightMargin(0.1234783);
   CSV_jets_all->SetBottomMargin(0.12);
   CSV_jets_all->SetFrameFillStyle(1000);
   CSV_jets_all->SetFrameBorderMode(0);
   CSV_jets_all->SetFrameFillStyle(1000);
   CSV_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8.197131e+12);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",20,0,1);
   st_stack_8->SetMinimum(0);
   st_stack_8->SetMaximum(8.197131e+12);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_8->GetXaxis()->SetRange(1,20);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/0.05");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_jets_CSV_all_stack_1 = new TH1D("VbbHcc_jets_CSV_all_stack_1","",20,0,1);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(1,5.464494e+12);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(2,4.151597e+11);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(3,1.483561e+11);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(4,8.018096e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(5,5.168873e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(6,3.693701e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(7,2.850875e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(8,2.271805e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(9,1.839086e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(10,1.560906e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(11,1.393769e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(12,1.228709e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(13,1.096686e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(14,1.026371e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(15,9.842265e+09);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(16,1.011968e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(17,1.019345e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(18,1.117861e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(19,1.535322e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinContent(20,7.973012e+10);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(1,3.364059e+08);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(2,9.129856e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(3,5.479316e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(4,4.0215e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(5,3.222505e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(6,2.732925e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(7,2.423542e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(8,2.145183e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(9,1.92756e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(10,1.779934e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(11,1.678761e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(12,1.577219e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(13,1.483713e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(14,1.445254e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(15,1.413738e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(16,1.439025e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(17,1.426528e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(18,1.510219e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(19,1.745037e+07);
   VbbHcc_jets_CSV_all_stack_1->SetBinError(20,4.035813e+07);
   VbbHcc_jets_CSV_all_stack_1->SetEntries(2.27431e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_all_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_all_stack_2 = new TH1D("VbbHcc_jets_CSV_all_stack_2","",20,0,1);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(1,2.598583e+08);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(2,3.067863e+07);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(3,1.46873e+07);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(4,9811649);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(5,7613833);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(6,6403868);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(7,5639013);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(8,5099995);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(9,4638819);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(10,4476983);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(11,4491762);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(12,4480797);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(13,4398922);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(14,4602843);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(15,4926605);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(16,5665103);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(17,6371457);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(18,7705397);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(19,1.190794e+07);
   VbbHcc_jets_CSV_all_stack_2->SetBinContent(20,7.883167e+07);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(1,4627.175);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(2,1562.093);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(3,1079.711);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(4,882.4333);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(5,776.0105);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(6,712.1429);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(7,667.2037);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(8,633.8937);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(9,603.8712);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(10,592.3795);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(11,593.0913);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(12,592.0755);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(13,586.1178);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(14,599.0315);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(15,619.6406);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(16,663.1752);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(17,703.739);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(18,772.9944);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(19,960.9824);
   VbbHcc_jets_CSV_all_stack_2->SetBinError(20,2481.555);
   VbbHcc_jets_CSV_all_stack_2->SetEntries(7.170845e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CSV_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all->Modified();
   CSV_jets_all->cd();
   CSV_jets_all->SetSelected(CSV_jets_all);
}

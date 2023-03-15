#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_18/CSV_jets_all_bckg_18
//=========  (Fri Mar 10 14:09:16 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_18 = new TCanvas("CSV_jets_all_bckg_18", "CSV_jets_all_bckg_18",0,0,600,600);
   CSV_jets_all_bckg_18->SetHighLightColor(2);
   CSV_jets_all_bckg_18->Range(-0.2183529,-1.879212,1.171633,15.10366);
   CSV_jets_all_bckg_18->SetFillColor(0);
   CSV_jets_all_bckg_18->SetFillStyle(4000);
   CSV_jets_all_bckg_18->SetBorderMode(0);
   CSV_jets_all_bckg_18->SetBorderSize(2);
   CSV_jets_all_bckg_18->SetLogy();
   CSV_jets_all_bckg_18->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_18->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_18->SetBottomMargin(0.12);
   CSV_jets_all_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_18->SetFrameBorderMode(0);
   CSV_jets_all_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(7.534386e+12);
   
   TH1F *st_stack_168 = new TH1F("st_stack_168","",20,0,1);
   st_stack_168->SetMinimum(1.441229);
   st_stack_168->SetMaximum(2.543164e+13);
   st_stack_168->SetDirectory(0);
   st_stack_168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_168->SetLineColor(ci);
   st_stack_168->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_168->GetXaxis()->SetRange(1,20);
   st_stack_168->GetXaxis()->SetLabelFont(42);
   st_stack_168->GetXaxis()->SetTitleOffset(1);
   st_stack_168->GetXaxis()->SetTitleFont(42);
   st_stack_168->GetYaxis()->SetTitle("Event/0.05");
   st_stack_168->GetYaxis()->SetLabelFont(42);
   st_stack_168->GetYaxis()->SetTitleSize(0.037);
   st_stack_168->GetYaxis()->SetTitleFont(42);
   st_stack_168->GetZaxis()->SetLabelFont(42);
   st_stack_168->GetZaxis()->SetTitleOffset(1);
   st_stack_168->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_168);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,6.253306e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2.763123e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,3.879188e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,1.674323e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,1.011529e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,6.404024e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,4.676172e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,3.539922e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,2.690662e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,2.184197e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,1.854023e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,1.556279e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,1.320416e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,1.156787e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,1.043347e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,1.001361e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,9.416062e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,9.804203e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,1.240496e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,5.053358e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,4.126821e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,2.628097e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,9.99588e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,6.604792e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,5.164414e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,4.113017e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,3.527551e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,3.083739e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,2.679563e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,2.415567e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,2.230303e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,2.029444e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.8766e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,1.775366e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,1.683205e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,1.666536e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,1.575102e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,1.630971e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.865226e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,3.751182e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.885636e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,2.339423e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,8.284073e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,1.70817e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,9093614);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,6440222);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,4995013);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,4231295);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,3733500);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,3304903);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,3085486);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,2982213);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,2883640);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,2776734);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,2830368);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2960375);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,3320397);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,3636107);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,4311857);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,6479367);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,4.001853e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,4262.458);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,2395.136);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,1118.214);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,825.5769);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,697.4197);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,617.3201);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,567.9984);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,533.3546);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,502.1096);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,485.2141);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,477.8329);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,470.4351);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,461.9889);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,466.8204);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,477.6537);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,505.097);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,529.5208);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,576.2948);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,706.8158);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1763.517);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(7.353928e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_bckg_18->Modified();
   CSV_jets_all_bckg_18->cd();
   CSV_jets_all_bckg_18->SetSelected(CSV_jets_all_bckg_18);
}

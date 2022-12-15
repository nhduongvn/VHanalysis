void CSV_jets_all_18()
{
//=========Macro generated from canvas: CSV_jets_all_18/CSV_jets_all_18
//=========  (Thu Dec 15 10:05:11 2022) by ROOT version 6.14/09
   TCanvas *CSV_jets_all_18 = new TCanvas("CSV_jets_all_18", "CSV_jets_all_18",0,0,600,600);
   CSV_jets_all_18->SetHighLightColor(2);
   CSV_jets_all_18->Range(-0.2183529,-1.515774e+12,1.171633,1.111568e+13);
   CSV_jets_all_18->SetFillColor(0);
   CSV_jets_all_18->SetFillStyle(4000);
   CSV_jets_all_18->SetBorderMode(0);
   CSV_jets_all_18->SetBorderSize(2);
   CSV_jets_all_18->SetLeftMargin(0.15709);
   CSV_jets_all_18->SetRightMargin(0.1234783);
   CSV_jets_all_18->SetBottomMargin(0.12);
   CSV_jets_all_18->SetFrameFillStyle(1000);
   CSV_jets_all_18->SetFrameBorderMode(0);
   CSV_jets_all_18->SetFrameFillStyle(1000);
   CSV_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.383363e+12);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",20,0,1);
   st_stack_51->SetMinimum(0);
   st_stack_51->SetMaximum(9.852531e+12);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_51->GetXaxis()->SetRange(1,20);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetLabelSize(0.035);
   st_stack_51->GetXaxis()->SetTitleSize(0.035);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Events/0.05");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetLabelSize(0.035);
   st_stack_51->GetYaxis()->SetTitleSize(0.037);
   st_stack_51->GetYaxis()->SetTitleOffset(0);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetLabelSize(0.035);
   st_stack_51->GetZaxis()->SetTitleSize(0.035);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,6.255341e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2.763041e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,3.855314e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,1.666948e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,1.005267e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,6.359331e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,4.651943e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,3.513912e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,2.67496e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,2.170088e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,1.842598e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,1.542199e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,1.311659e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,1.146161e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,1.036547e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,9.982102e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,9.347984e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,9.765527e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,1.23532e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,5.033712e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,4.087838e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,2.601366e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,9.86443e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,6.528913e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,5.092519e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,4.067729e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,3.516515e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,3.010869e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,2.648946e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,2.390369e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,2.210282e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,2.01113e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.862064e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,1.74154e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,1.663099e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,1.642312e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,1.567912e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,1.621911e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.814686e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,3.704731e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.858216e+09);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,2.33942e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,8.28428e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,1.708082e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,9093587);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,6440333);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,4994778);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,4231672);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,3733153);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,3305187);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,3085421);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,2981989);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,2883701);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,2776644);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,2830415);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2960302);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,3320771);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,3635936);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,4312290);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,6479756);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,4.00182e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,4569.456);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,2568.422);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,1198.841);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,885.1012);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,747.564);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,661.8332);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,609.1565);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,571.9323);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,538.4122);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,520.1205);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,512.2273);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,504.5091);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,495.3582);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,500.4559);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,512.2853);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,541.5513);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,567.7413);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,617.8717);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,758.0606);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1891.119);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(6.389881e+09);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_18->Modified();
   CSV_jets_all_18->cd();
   CSV_jets_all_18->SetSelected(CSV_jets_all_18);
}

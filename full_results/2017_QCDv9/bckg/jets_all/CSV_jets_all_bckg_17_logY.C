#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_17/CSV_jets_all_bckg_17
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_17 = new TCanvas("CSV_jets_all_bckg_17", "CSV_jets_all_bckg_17",0,0,600,600);
   CSV_jets_all_bckg_17->SetHighLightColor(2);
   CSV_jets_all_bckg_17->Range(-0.2183529,-1.850391,1.171633,14.93124);
   CSV_jets_all_bckg_17->SetFillColor(0);
   CSV_jets_all_bckg_17->SetFillStyle(4000);
   CSV_jets_all_bckg_17->SetBorderMode(0);
   CSV_jets_all_bckg_17->SetBorderSize(2);
   CSV_jets_all_bckg_17->SetLogy();
   CSV_jets_all_bckg_17->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_17->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_17->SetBottomMargin(0.12);
   CSV_jets_all_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_17->SetFrameBorderMode(0);
   CSV_jets_all_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.352864e+12);
   
   TH1F *st_stack_166 = new TH1F("st_stack_166","",20,0,1);
   st_stack_166->SetMinimum(1.456814);
   st_stack_166->SetMaximum(1.790917e+13);
   st_stack_166->SetDirectory(0);
   st_stack_166->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_166->SetLineColor(ci);
   st_stack_166->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_166->GetXaxis()->SetRange(1,20);
   st_stack_166->GetXaxis()->SetLabelFont(42);
   st_stack_166->GetXaxis()->SetTitleOffset(1);
   st_stack_166->GetXaxis()->SetTitleFont(42);
   st_stack_166->GetYaxis()->SetTitle("Event/0.05");
   st_stack_166->GetYaxis()->SetLabelFont(42);
   st_stack_166->GetYaxis()->SetTitleSize(0.037);
   st_stack_166->GetYaxis()->SetTitleFont(42);
   st_stack_166->GetZaxis()->SetLabelFont(42);
   st_stack_166->GetZaxis()->SetTitleOffset(1);
   st_stack_166->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_166);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,4.442717e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2.150011e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,2.939891e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,1.247075e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,7.490734e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,4.723104e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,3.45727e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,2.623575e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,1.998191e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,1.621178e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,1.376078e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,1.152409e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,9.778837e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,8.454559e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,7.625131e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,7.269302e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,6.797649e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,7.004648e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,8.758e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,3.488704e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.647616e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.855923e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,6.844807e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,4.454753e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,3.451206e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,2.738541e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,2.342097e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,2.039428e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,1.778779e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,1.601098e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,1.474242e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,1.348213e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.241246e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,1.15236e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,1.093619e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,1.066276e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,1.029633e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,1.043697e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.164274e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,2.301744e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.921894e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,1.593628e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,6.163606e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,1.222646e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,6410510);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,4520675);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,3491418);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,2957198);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,2608123);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,2303654);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,2146177);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,2073969);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,2004093);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,1926650);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,1959616);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2047606);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,2291788);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,2508852);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2967976);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,4450017);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,2.728081e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,3289.102);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,2017.813);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,901.3474);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,655.5435);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,550.9053);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,483.9194);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,445.0603);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,417.2126);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,391.5657);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,377.878);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,371.8936);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,365.6481);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,358.4169);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,361.4001);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,369.2825);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,390.503);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,408.3558);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,443.8462);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,543.1429);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1344.42);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(5.212325e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_bckg_17->Modified();
   CSV_jets_all_bckg_17->cd();
   CSV_jets_all_bckg_17->SetSelected(CSV_jets_all_bckg_17);
}

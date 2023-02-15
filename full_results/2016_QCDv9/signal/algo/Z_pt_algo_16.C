#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_16()
{
//=========Macro generated from canvas: Z_pt_algo_16/Z_pt_algo_16
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_16 = new TCanvas("Z_pt_algo_16", "Z_pt_algo_16",0,0,600,600);
   Z_pt_algo_16->SetHighLightColor(2);
   Z_pt_algo_16->Range(37.97653,-0.1697947,1705.96,1.245161);
   Z_pt_algo_16->SetFillColor(0);
   Z_pt_algo_16->SetFillStyle(4000);
   Z_pt_algo_16->SetBorderMode(0);
   Z_pt_algo_16->SetBorderSize(2);
   Z_pt_algo_16->SetLeftMargin(0.15709);
   Z_pt_algo_16->SetRightMargin(0.1234783);
   Z_pt_algo_16->SetBottomMargin(0.12);
   Z_pt_algo_16->SetFrameFillStyle(1000);
   Z_pt_algo_16->SetFrameBorderMode(0);
   Z_pt_algo_16->SetFrameFillStyle(1000);
   Z_pt_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.103666);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",40,0,2000);
   st_stack_73->SetMinimum(0);
   st_stack_73->SetMaximum(1.103666);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_73->GetXaxis()->SetRange(7,30);
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetTitleOffset(1);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Events/50.0");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetTitleSize(0.037);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetTitleOffset(1);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.1490303);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,0.7357771);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,0.6646737);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.3288792);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.1804026);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.08657453);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.05529305);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.03907649);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.01416278);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.002991137);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.00572183);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.003032998);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.0210176);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.04704407);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.04516069);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.03162155);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.02335896);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.01694886);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01264683);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.01088597);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.006382542);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.002991137);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.004079467);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.003032998);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(804);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.01696893);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.1113623);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.2299499);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.1295541);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.06483561);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.03491168);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.01088084);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.005320895);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.001567256);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.001102818);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.0003754982);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.002532268);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.006528381);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.009427512);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.007043596);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.00501346);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.00364576);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.002044134);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.001424196);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0007848127);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0006395216);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.0003754982);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(1609);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_16->Modified();
   Z_pt_algo_16->cd();
   Z_pt_algo_16->SetSelected(Z_pt_algo_16);
}

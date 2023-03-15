#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_bjets_truth_algo_signal_16_logY()
{
//=========Macro generated from canvas: dR_bjets_truth_algo_signal_16/dR_bjets_truth_algo_signal_16
//=========  (Thu Mar  2 13:32:45 2023) by ROOT version 6.26/06
   TCanvas *dR_bjets_truth_algo_signal_16 = new TCanvas("dR_bjets_truth_algo_signal_16", "dR_bjets_truth_algo_signal_16",0,0,600,600);
   dR_bjets_truth_algo_signal_16->SetHighLightColor(2);
   dR_bjets_truth_algo_signal_16->Range(-1.310117,0.5321736,7.029799,2.613364);
   dR_bjets_truth_algo_signal_16->SetFillColor(0);
   dR_bjets_truth_algo_signal_16->SetFillStyle(4000);
   dR_bjets_truth_algo_signal_16->SetBorderMode(0);
   dR_bjets_truth_algo_signal_16->SetBorderSize(2);
   dR_bjets_truth_algo_signal_16->SetLogy();
   dR_bjets_truth_algo_signal_16->SetLeftMargin(0.15709);
   dR_bjets_truth_algo_signal_16->SetRightMargin(0.1234783);
   dR_bjets_truth_algo_signal_16->SetBottomMargin(0.12);
   dR_bjets_truth_algo_signal_16->SetFrameFillStyle(1000);
   dR_bjets_truth_algo_signal_16->SetFrameBorderMode(0);
   dR_bjets_truth_algo_signal_16->SetFrameFillStyle(1000);
   dR_bjets_truth_algo_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(201.6321);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",60,0,6);
   st_stack_13->SetMinimum(6.052243);
   st_stack_13->SetMaximum(254.2404);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("#Delta R(b,b-jet)");
   st_stack_13->GetXaxis()->SetRange(1,60);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/0.1");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_eff_algo_dR_bjets_truth_stack_1 = new TH1D("VbbHcc_eff_algo_dR_bjets_truth_stack_1","",60,0,6);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(1,1.492357);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(2,0.1071684);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(3,0.03376369);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(4,0.01786879);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(5,0.009159773);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(6,0.009095299);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(8,0.002994311);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(9,0.002698892);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(11,0.00583566);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(12,0.008492631);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(13,0.002886578);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(14,0.01241918);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(15,0.006268435);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(16,0.00255346);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(17,0.00636128);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(18,0.002805645);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(19,0.003218024);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(20,0.003032998);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(21,0.005361097);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(23,0.006180698);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(24,0.003032998);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(28,0.01108797);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(30,0.005764258);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinContent(31,0.003235426);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(1,0.066761);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(2,0.01774703);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(3,0.01019647);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(4,0.007300703);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(5,0.005294039);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(6,0.005261498);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(8,0.002994311);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(9,0.002698892);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(11,0.004127007);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(12,0.004923988);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(13,0.002886578);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(14,0.006217754);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(15,0.004436867);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(16,0.00255346);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(17,0.003993542);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(18,0.002805645);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(19,0.003218024);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(20,0.003032998);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(21,0.003800247);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(23,0.004373819);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(24,0.003032998);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(28,0.005549846);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(30,0.004075946);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetBinError(31,0.003235426);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetEntries(620);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->SetLineColor(ci);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_dR_bjets_truth_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_eff_algo_dR_bjets_truth_stack_1,"");
   
   TH1D *VbbHcc_eff_algo_dR_bjets_truth_stack_2 = new TH1D("VbbHcc_eff_algo_dR_bjets_truth_stack_2","",60,0,6);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(1,0.5239644);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(2,0.03455342);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(3,0.008306145);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(4,0.004801023);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(5,0.001921192);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(6,0.0004022653);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(7,0.0003754884);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(8,0.001146307);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(9,0.000786432);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(10,0.001052079);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(11,0.0003255062);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(13,0.0007952017);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(14,0.000754927);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(15,0.001608864);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(16,0.0008182606);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(17,0.001173482);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(18,0.00155703);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(19,0.001907684);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(20,0.003847683);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(21,0.002099068);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(22,0.0007714432);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(23,0.000749874);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(24,0.001179228);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(25,0.001196859);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(26,0.001361049);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(27,0.0009007951);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(28,0.00084786);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(29,0.001624886);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(30,0.0007286277);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(31,0.001717456);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinContent(37,0.0003402515);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(1,0.01419578);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(2,0.003633998);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(3,0.001777747);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(4,0.00134305);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(5,0.0008597988);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(6,0.0004022653);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(7,0.0003754884);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(8,0.0006620708);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(9,0.0005576809);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(10,0.000610023);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(11,0.0003255062);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(13,0.0005635158);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(14,0.0005338855);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(15,0.0008056258);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(16,0.0005786232);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(17,0.0006779569);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(18,0.0007787597);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(19,0.0008537205);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(20,0.001221461);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(21,0.0008601682);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(22,0.0005464324);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(23,0.0005302416);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(24,0.0006822725);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(25,0.0006925146);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(26,0.0006991542);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(27,0.0005552918);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(28,0.0005510293);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(29,0.0008131519);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(30,0.0005154904);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(31,0.0008235108);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetBinError(37,0.0003402515);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetEntries(1600);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->SetLineColor(ci);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_dR_bjets_truth_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_eff_algo_dR_bjets_truth_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_eff_algo_dR_bjets_truth_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_eff_algo_dR_bjets_truth_stack_1","ZHcc","F");

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
   dR_bjets_truth_algo_signal_16->Modified();
   dR_bjets_truth_algo_signal_16->cd();
   dR_bjets_truth_algo_signal_16->SetSelected(dR_bjets_truth_algo_signal_16);
}

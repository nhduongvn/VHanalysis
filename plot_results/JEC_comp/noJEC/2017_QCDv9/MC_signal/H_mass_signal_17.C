#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_signal_17()
{
//=========Macro generated from canvas: H_mass_signal_17/H_mass_signal_17
//=========  (Thu Mar 23 11:52:35 2023) by ROOT version 6.26/06
   TCanvas *H_mass_signal_17 = new TCanvas("H_mass_signal_17", "H_mass_signal_17",0,0,600,600);
   H_mass_signal_17->SetHighLightColor(2);
   H_mass_signal_17->Range(-65.50587,-37.79987,351.4899,277.1704);
   H_mass_signal_17->SetFillColor(0);
   H_mass_signal_17->SetFillStyle(4000);
   H_mass_signal_17->SetBorderMode(0);
   H_mass_signal_17->SetBorderSize(2);
   H_mass_signal_17->SetLeftMargin(0.15709);
   H_mass_signal_17->SetRightMargin(0.1234783);
   H_mass_signal_17->SetBottomMargin(0.12);
   H_mass_signal_17->SetFrameFillStyle(1000);
   H_mass_signal_17->SetFrameBorderMode(0);
   H_mass_signal_17->SetFrameFillStyle(1000);
   H_mass_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(245.6734);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",200,0,400);
   st_stack_3->SetMinimum(-0.00343234);
   st_stack_3->SetMaximum(245.6734);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetTitle("M_{H} [GeV]");
   st_stack_3->GetXaxis()->SetRange(1,150);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_MC_H_mass_stack_1 = new TH1D("VbbHcc_MC_H_mass_stack_1","",200,0,400);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(11,0.001918328);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(35,0.001666046);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(44,0.002008143);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(45,0.002001201);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(46,0.001775563);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(50,0.001386779);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(52,0.002014015);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(53,0.003992355);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(56,0.005839579);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(57,-0.00343234);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(58,0.005758965);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(59,0.01104402);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(60,0.01663132);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(61,0.03936213);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(62,0.4743207);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(63,179.1278);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(64,0.08644048);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(65,0.0179858);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(66,0.005303593);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(67,0.00293867);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(68,0.001431288);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(69,0.001706444);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(71,0.00320581);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(73,0.001531515);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(74,0.001931467);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(76,0.001962518);
   VbbHcc_MC_H_mass_stack_1->SetBinError(11,0.001918328);
   VbbHcc_MC_H_mass_stack_1->SetBinError(35,0.001666046);
   VbbHcc_MC_H_mass_stack_1->SetBinError(44,0.002008143);
   VbbHcc_MC_H_mass_stack_1->SetBinError(45,0.002001201);
   VbbHcc_MC_H_mass_stack_1->SetBinError(46,0.001775563);
   VbbHcc_MC_H_mass_stack_1->SetBinError(50,0.001386779);
   VbbHcc_MC_H_mass_stack_1->SetBinError(52,0.002014015);
   VbbHcc_MC_H_mass_stack_1->SetBinError(53,0.00282303);
   VbbHcc_MC_H_mass_stack_1->SetBinError(56,0.003373831);
   VbbHcc_MC_H_mass_stack_1->SetBinError(57,0.002460277);
   VbbHcc_MC_H_mass_stack_1->SetBinError(58,0.003370488);
   VbbHcc_MC_H_mass_stack_1->SetBinError(59,0.004548778);
   VbbHcc_MC_H_mass_stack_1->SetBinError(60,0.005626565);
   VbbHcc_MC_H_mass_stack_1->SetBinError(61,0.009038775);
   VbbHcc_MC_H_mass_stack_1->SetBinError(62,0.0309567);
   VbbHcc_MC_H_mass_stack_1->SetBinError(63,0.5915025);
   VbbHcc_MC_H_mass_stack_1->SetBinError(64,0.01279959);
   VbbHcc_MC_H_mass_stack_1->SetBinError(65,0.005717807);
   VbbHcc_MC_H_mass_stack_1->SetBinError(66,0.003079254);
   VbbHcc_MC_H_mass_stack_1->SetBinError(67,0.002130031);
   VbbHcc_MC_H_mass_stack_1->SetBinError(68,0.001431288);
   VbbHcc_MC_H_mass_stack_1->SetBinError(69,0.001706444);
   VbbHcc_MC_H_mass_stack_1->SetBinError(71,0.002291977);
   VbbHcc_MC_H_mass_stack_1->SetBinError(73,0.001531515);
   VbbHcc_MC_H_mass_stack_1->SetBinError(74,0.001931467);
   VbbHcc_MC_H_mass_stack_1->SetBinError(76,0.001962518);
   VbbHcc_MC_H_mass_stack_1->SetEntries(109542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_mass_stack_1->SetFillColor(ci);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_mass_stack_1,"");
   
   TH1D *VbbHcc_MC_H_mass_stack_2 = new TH1D("VbbHcc_MC_H_mass_stack_2","",200,0,400);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(42,0.0003101816);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(59,0.0004744563);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(60,0.0009191016);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(61,0.003078198);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(62,0.03576172);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(63,24.78108);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(64,0.01108986);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(65,0.003583354);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(66,0.0001800768);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(67,0.0005785321);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(68,0.000230348);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(69,0.0003084413);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(83,0.0002548203);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(90,0.0002428652);
   VbbHcc_MC_H_mass_stack_2->SetBinError(42,0.0003101816);
   VbbHcc_MC_H_mass_stack_2->SetBinError(59,0.000335998);
   VbbHcc_MC_H_mass_stack_2->SetBinError(60,0.000462122);
   VbbHcc_MC_H_mass_stack_2->SetBinError(61,0.0008347461);
   VbbHcc_MC_H_mass_stack_2->SetBinError(62,0.002846284);
   VbbHcc_MC_H_mass_stack_2->SetBinError(63,0.07716243);
   VbbHcc_MC_H_mass_stack_2->SetBinError(64,0.001612287);
   VbbHcc_MC_H_mass_stack_2->SetBinError(65,0.0009625235);
   VbbHcc_MC_H_mass_stack_2->SetBinError(66,0.0001800768);
   VbbHcc_MC_H_mass_stack_2->SetBinError(67,0.0003602524);
   VbbHcc_MC_H_mass_stack_2->SetBinError(68,0.000230348);
   VbbHcc_MC_H_mass_stack_2->SetBinError(69,0.0003084413);
   VbbHcc_MC_H_mass_stack_2->SetBinError(83,0.0002548203);
   VbbHcc_MC_H_mass_stack_2->SetBinError(90,0.0002428652);
   VbbHcc_MC_H_mass_stack_2->SetEntries(108038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_mass_stack_2->SetFillColor(ci);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_mass_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_mass_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_MC_H_mass_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_signal_17->Modified();
   H_mass_signal_17->cd();
   H_mass_signal_17->SetSelected(H_mass_signal_17);
}

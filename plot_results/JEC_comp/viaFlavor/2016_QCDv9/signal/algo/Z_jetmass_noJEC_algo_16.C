#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_algo_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_16/Z_jetmass_noJEC_algo_16
//=========  (Mon Mar 27 11:09:52 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_noJEC_algo_16 = new TCanvas("Z_jetmass_noJEC_algo_16", "Z_jetmass_noJEC_algo_16",0,0,600,600);
   Z_jetmass_noJEC_algo_16->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_16->Range(-65.50587,-0.01486298,351.4899,0.1089952);
   Z_jetmass_noJEC_algo_16->SetFillColor(0);
   Z_jetmass_noJEC_algo_16->SetFillStyle(4000);
   Z_jetmass_noJEC_algo_16->SetBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetBorderSize(2);
   Z_jetmass_noJEC_algo_16->SetLeftMargin(0.15709);
   Z_jetmass_noJEC_algo_16->SetRightMargin(0.1234783);
   Z_jetmass_noJEC_algo_16->SetBottomMargin(0.12);
   Z_jetmass_noJEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.09660935);
   
   TH1F *st_stack_185 = new TH1F("st_stack_185","",150,0,300);
   st_stack_185->SetMinimum(0);
   st_stack_185->SetMaximum(0.09660935);
   st_stack_185->SetDirectory(0);
   st_stack_185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_185->SetLineColor(ci);
   st_stack_185->GetXaxis()->SetTitle("b-jet mass [GeV]");
   st_stack_185->GetXaxis()->SetRange(1,150);
   st_stack_185->GetXaxis()->SetLabelFont(42);
   st_stack_185->GetXaxis()->SetTitleOffset(1);
   st_stack_185->GetXaxis()->SetTitleFont(42);
   st_stack_185->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_185->GetYaxis()->SetLabelFont(42);
   st_stack_185->GetYaxis()->SetTitleSize(0.037);
   st_stack_185->GetYaxis()->SetTitleFont(42);
   st_stack_185->GetZaxis()->SetLabelFont(42);
   st_stack_185->GetZaxis()->SetTitleOffset(1);
   st_stack_185->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_185);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(3,0.002222789);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(4,0.03483193);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(5,0.04506402);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(6,0.04712181);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(7,0.05264966);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(8,0.07117771);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(9,0.01754393);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(10,0.02441842);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(11,0.0117084);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(12,0.01483245);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(13,0.01024163);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(14,0.005399401);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(15,0.008605182);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(16,0.0029041);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(17,0.003290149);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(20,0.008796648);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(21,0.002897276);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(3,0.002222789);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(4,0.01010139);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(5,0.01166006);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(6,0.0117921);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(7,0.01245247);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(8,0.01457828);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(9,0.007166967);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(10,0.008654163);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(11,0.005855681);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(12,0.006649444);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(13,0.005227935);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(14,0.003820228);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(15,0.004997785);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(16,0.0029041);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(17,0.003290149);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(20,0.005080972);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(21,0.002897276);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetEntries(124);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(3,0.0007547715);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(4,0.008506668);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(5,0.01346598);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(6,0.02286931);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(7,0.02267065);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(8,0.009008056);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(9,0.0111308);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(10,0.008049771);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(11,0.007021538);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(12,0.003696345);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(13,0.00339993);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(14,0.002116267);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(15,0.001259337);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(16,0.0004284568);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(17,0.0003931697);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(18,0.001436241);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(19,0.0007455686);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(20,0.0003911379);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(21,0.0003751166);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(22,0.0003911379);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(43,0.0003829271);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(3,0.0005339694);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(4,0.001813085);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(5,0.002263645);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(6,0.002955323);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(7,0.002965865);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(8,0.001839246);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(9,0.002071276);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(10,0.001723891);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(11,0.001658876);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(12,0.001192003);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(13,0.001145476);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(14,0.0008748648);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(15,0.0006437847);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(16,0.0004284568);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(17,0.0003931697);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(18,0.0007213794);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(19,0.000527251);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(20,0.0003911379);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(21,0.0003751166);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(22,0.0003911379);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(43,0.0003829271);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetEntries(317);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_16->Modified();
   Z_jetmass_noJEC_algo_16->cd();
   Z_jetmass_noJEC_algo_16->SetSelected(Z_jetmass_noJEC_algo_16);
}

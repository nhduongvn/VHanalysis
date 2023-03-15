#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Fri Mar 10 11:26:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-0.6102057,7.029799,4.474842);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLeftMargin(0.15709);
   Z_dR_algo_18->SetRightMargin(0.1234783);
   Z_dR_algo_18->SetBottomMargin(0.12);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.966337);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",30,0,6);
   st_stack_83->SetMinimum(0);
   st_stack_83->SetMaximum(3.966337);
   st_stack_83->SetDirectory(0);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_83->GetXaxis()->SetRange(1,30);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Event/0.2");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetTitleSize(0.037);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,0.002958322);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,1.324196);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,2.200646);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,2.382829);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,2.306064);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,1.844335);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,1.551644);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,1.26349);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,1.06097);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.6724502);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.6427799);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.6931097);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.6026195);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.597255);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.4556108);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.1543846);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.07664334);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.06113367);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.02662388);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,0.01953413);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,0.00884394);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,0.009760123);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,0.002958322);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.06633373);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.08046313);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.08604255);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.08943768);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.07161575);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.06468141);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.05949914);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.06552893);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.04262487);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.04229924);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.04359307);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.04018363);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.04472157);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.03582553);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.02042232);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.01399714);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.01311238);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.00789754);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,0.00742352);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,0.004502563);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,0.004888649);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(7188);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.3200894);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.7282855);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.9092305);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.8765466);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.7326562);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.467455);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.3738274);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.3456194);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.3046753);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.2672314);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.2473712);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.2275538);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.2277292);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.1939048);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.0804622);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.04499719);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.02514662);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.01597199);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.005632584);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.00665058);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,0.003592598);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,0.001801146);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,0.0006790568);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.01094078);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.01659394);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.01826283);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.01822149);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.01654484);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.01306054);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.01159751);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.01237114);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.01095173);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.009904823);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.00966143);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.009805669);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.009647404);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.008943727);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.005338322);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.004143198);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.002983078);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.002374602);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.001436697);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.001454925);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.001107571);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.0008282845);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.0004810685);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(18991);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}

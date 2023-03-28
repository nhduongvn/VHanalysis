#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Mon Mar 27 11:09:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.310117,-0.04273506,7.029799,0.3133904);
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
   st->SetMaximum(0.2777779);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0);
   st_stack_115->SetMaximum(0.2777779);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Event/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetTitleSize(0.037);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1058356);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.1345664);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.166064);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.1472985);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.09145887);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.03973952);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.03151838);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.02630559);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.007265839);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.007295387);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.009020687);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.01628927);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.006375602);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.007899204);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.01412956);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.01687522);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.006494463);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.002736771);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01693618);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.01977535);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.02084724);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.04353849);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.016138);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.01017069);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.008914475);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.008385244);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.004197446);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.005249933);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.004542035);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.006721901);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.0039653);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.004580724);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.00649814);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.006940817);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.004593015);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.002736771);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(321);

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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.02819599);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.04639503);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.06449167);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.04712569);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.0310498);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.01410653);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.009536514);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.005787674);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.005087076);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.004564613);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.00813761);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.003698553);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.002704254);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.002034819);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.003632388);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.002290641);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.001367115);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.001259482);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.0003290641);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.001008512);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,0.0003156401);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.004033034);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.00439021);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.004765557);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.004160456);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.003318762);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.002227979);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.001932017);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.001495442);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.001339575);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001302379);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.00175074);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001136339);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.000932972);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.0008395592);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.00117778);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0008764007);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0006901302);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.000586089);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0003290641);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0005976836);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.0003156401);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(830);

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

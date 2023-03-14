#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Thu Mar  9 13:08:26 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-3.482391,7.029799,0.363763);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLogy();
   Z_dR_both_16->SetLeftMargin(0.15709);
   Z_dR_both_16->SetRightMargin(0.1234783);
   Z_dR_both_16->SetBottomMargin(0.12);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.9567909);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(1.009684);
   st_stack_145->SetMaximum(0.95312);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Event/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.3192248);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.5425832);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.5113988);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,0.4250333);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.3628155);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.2729716);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.1512096);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.1361697);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.110409);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.1579349);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.1624412);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.1986065);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.2037116);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.20063);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.08150147);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.03144986);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.01300966);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.008860372);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.007507651);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.03076991);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.03993682);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.03921907);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.0355364);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.03265236);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.02837453);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.02182666);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.02011197);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.01787787);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.02152345);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.02186404);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.02406595);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.02472983);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.02502582);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.01547491);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.009524318);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.006149257);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.005125464);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.004364522);
   VbbHcc_both_Z_dR_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.1203879);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.2515532);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.2641847);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.2180817);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.1362731);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.0764744);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.06034978);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.05384185);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.0479278);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.05191002);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.06352369);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.07896204);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.07793392);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.07497705);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.03824039);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.01330532);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.01044099);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.005328527);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.003125603);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.002091962);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.0003759984);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.0005512638);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0003688961);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,0.0006978566);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.006764158);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.009777752);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.01005866);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.00914771);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.007221894);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.005395761);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.004805394);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.004502386);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.004240114);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.004452573);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.004932174);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.005488518);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.005469595);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.005362042);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.003806663);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.002197317);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.001967968);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.001425274);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.001061162);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.0008843052);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0003759984);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0004168853);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0003688961);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,0.0004946311);
   VbbHcc_both_Z_dR_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}

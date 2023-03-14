#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(-1.310117,-0.1524711,7.029799,1.118121);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetFillStyle(4000);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetLogy();
   H_dR_Bj1_both_17->SetLeftMargin(0.15709);
   H_dR_Bj1_both_17->SetRightMargin(0.1234783);
   H_dR_Bj1_both_17->SetBottomMargin(0.12);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_174 = new TH1F("st_stack_174","",30,0,6);
   st_stack_174->SetMinimum(-2.492184e+09);
   st_stack_174->SetMaximum(-0.9486046);
   st_stack_174->SetDirectory(0);
   st_stack_174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_174->SetLineColor(ci);
   st_stack_174->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_174->GetXaxis()->SetRange(1,30);
   st_stack_174->GetXaxis()->SetLabelFont(42);
   st_stack_174->GetXaxis()->SetTitleOffset(1);
   st_stack_174->GetXaxis()->SetTitleFont(42);
   st_stack_174->GetYaxis()->SetTitle("Event/0.2");
   st_stack_174->GetYaxis()->SetLabelFont(42);
   st_stack_174->GetYaxis()->SetTitleSize(0.037);
   st_stack_174->GetYaxis()->SetTitleFont(42);
   st_stack_174->GetZaxis()->SetLabelFont(42);
   st_stack_174->GetZaxis()->SetTitleOffset(1);
   st_stack_174->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_174);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.1247621);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,0.5937338);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,0.6438614);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,0.5981896);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,0.4455789);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,0.3731723);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,0.2149918);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.1771176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.1125087);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.1147366);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.09802735);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.08800182);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.07686235);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.07129262);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.06683683);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.05569736);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.03230447);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.02005105);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.01336737);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.01002552);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.004455789);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.001113947);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,0.001113947);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.004455789);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.002227894);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,0.001113947);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.01178891);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.02571747);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.02678111);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.02581379);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.02227894);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.02038858);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.01547545);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.01404634);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.01119503);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.01130533);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.01044975);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.009900979);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.00925314);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.008911577);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.008628597);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.007876796);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.005998789);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.004726077);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.003858826);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.003341841);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.002227894);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.001113947);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,0.001113947);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.002227894);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.001575359);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,0.001113947);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.05034265);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.2290298);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.3000071);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.2645916);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.1968339);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.1314177);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.09717303);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.06790404);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.05458666);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.04229368);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.03673257);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.03687892);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.03541547);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.02429326);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.02590305);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.02122001);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.01375642);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.008195316);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.004829382);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.004097658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.001902484);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.001609794);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.001317104);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.0002926898);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.0004390348);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.0004390348);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.0001463449);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.002714294);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.005789417);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.006626048);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.006222671);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.005367089);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.004385467);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.003771045);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.003152366);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.00282639);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.002487864);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.00231854);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.002323154);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.002276593);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.001885522);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.001946993);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.001762226);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.001418867);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.001095145);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.0008406876);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.0007743845);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.0005276541);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.0004853712);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.0004390348);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.000206963);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0002534768);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.0002534768);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.0001463449);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}

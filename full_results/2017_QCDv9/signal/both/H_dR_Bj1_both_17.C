#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_17()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Wed Jan 18 11:40:25 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(-1.310117,-0.4758252,7.029799,3.489385);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetFillStyle(4000);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
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
   st->SetMaximum(3.092864);
   
   TH1F *st_stack_174 = new TH1F("st_stack_174","",30,0,6);
   st_stack_174->SetMinimum(0);
   st_stack_174->SetMaximum(3.092864);
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
   st_stack_174->GetYaxis()->SetTitle("Events/0.2");
   st_stack_174->GetYaxis()->SetLabelFont(42);
   st_stack_174->GetYaxis()->SetTitleSize(0.037);
   st_stack_174->GetYaxis()->SetTitleFont(42);
   st_stack_174->GetZaxis()->SetLabelFont(42);
   st_stack_174->GetZaxis()->SetTitleOffset(1);
   st_stack_174->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_174);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,0.2333005);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,1.106194);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,1.568034);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,1.514073);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,1.236334);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,1.061756);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,0.8363904);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,0.6983146);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,0.5618258);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,0.4777106);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,0.485646);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,0.3586798);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,0.3396348);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,0.3221769);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,0.2602809);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,0.2317135);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,0.1301404);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,0.09363763);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,0.05872191);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,0.03967696);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,0.01904494);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,0.007935393);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,0.009522471);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,0.006348314);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,0.006348314);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,0.003174157);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,0.0192423);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,0.04190008);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,0.04988579);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,0.04901992);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,0.04429627);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,0.04104984);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,0.03643374);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,0.03329084);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,0.0298607);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,0.02753478);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,0.02776254);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,0.02385902);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,0.02321696);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,0.02261239);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,0.02032452);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,0.01917674);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,0.01437161);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,0.01219058);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,0.009653822);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,0.007935393);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,0.005497801);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,0.003548816);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,0.003887533);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,0.003174157);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,0.003174157);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,0.002244468);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(7351);

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
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,0.09184274);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,0.4024743);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,0.4938755);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,0.449058);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,0.3768643);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,0.2790606);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,0.2218797);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,0.1616079);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,0.1379849);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,0.1114918);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,0.09824524);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,0.08212861);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,0.08058317);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,0.07351835);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,0.06380421);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,0.06005102);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,0.02936318);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,0.02273991);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,0.01258422);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,0.006623275);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,0.007727154);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.004415516);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.001766207);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.001324655);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.0008831033);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.0008831033);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.0002207758);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,0.004502961);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,0.009426378);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,0.01044202);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,0.009956965);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,0.009121542);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,0.007849194);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,0.006998977);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,0.0059732);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,0.005519395);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,0.004961319);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,0.004657271);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,0.00425817);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,0.004217916);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,0.004028781);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,0.003753189);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,0.003641128);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,0.002546111);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.00224063);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.001666821);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.001209239);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.001306127);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.0009873395);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.0006244483);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.0005407881);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.0004415516);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.0004415516);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.0002207758);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(14825);

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

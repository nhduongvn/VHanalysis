#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_16_logY()
{
//=========Macro generated from canvas: H_dR_seljet_16/H_dR_seljet_16
//=========  (Tue Feb 14 10:43:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_16 = new TCanvas("H_dR_seljet_16", "H_dR_seljet_16",0,0,600,600);
   H_dR_seljet_16->SetHighLightColor(2);
   H_dR_seljet_16->Range(-1.353788,0.12061,7.264125,4.336631);
   H_dR_seljet_16->SetFillColor(0);
   H_dR_seljet_16->SetFillStyle(4000);
   H_dR_seljet_16->SetBorderMode(0);
   H_dR_seljet_16->SetBorderSize(2);
   H_dR_seljet_16->SetLogy();
   H_dR_seljet_16->SetLeftMargin(0.15709);
   H_dR_seljet_16->SetRightMargin(0.1234783);
   H_dR_seljet_16->SetBottomMargin(0.12);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5321.592);
   
   TH1F *st_stack_277 = new TH1F("st_stack_277","",30,0,6);
   st_stack_277->SetMinimum(4.231871);
   st_stack_277->SetMaximum(8222.968);
   st_stack_277->SetDirectory(0);
   st_stack_277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_277->SetLineColor(ci);
   st_stack_277->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_277->GetXaxis()->SetRange(1,31);
   st_stack_277->GetXaxis()->SetLabelFont(42);
   st_stack_277->GetXaxis()->SetTitleOffset(1);
   st_stack_277->GetXaxis()->SetTitleFont(42);
   st_stack_277->GetYaxis()->SetTitle("Events/0.2");
   st_stack_277->GetYaxis()->SetLabelFont(42);
   st_stack_277->GetYaxis()->SetTitleSize(0.037);
   st_stack_277->GetYaxis()->SetTitleFont(42);
   st_stack_277->GetZaxis()->SetLabelFont(42);
   st_stack_277->GetZaxis()->SetTitleOffset(1);
   st_stack_277->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_277);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,0.8641251);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,1.781948);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.603345);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,2.940148);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,4.023597);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,5.126542);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,6.675629);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,9.008087);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,12.02782);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,16.35325);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,21.95433);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,29.31008);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,38.19728);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,41.95476);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,14.37149);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,6.128155);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,3.1527);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.71794);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,1.0904);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,0.6205983);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.4082298);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.2324752);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.1310709);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.04072348);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.01060998);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,0.002570862);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.0505207);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.0721895);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.08713856);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.09353415);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.1098346);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.1243366);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.1420769);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.164986);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.1907023);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.2223251);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.2578409);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.2972294);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.3403146);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.3576667);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.2079589);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.1349796);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.09628005);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.07094784);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.05625676);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.04235165);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.03409514);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.0256632);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.01911505);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.01057431);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.005313383);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,0.002570862);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(78219);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.2353273);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,0.5828983);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,0.8260793);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,0.8886676);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,0.9419512);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,0.9915674);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1.099673);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1.473477);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,2.280126);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,3.63631);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,5.632367);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,7.851569);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,10.42712);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,11.26116);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,4.855835);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,2.428505);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,1.33713);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,0.8033002);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.4858365);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.2813253);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.1751677);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.08857159);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.04916504);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.02527517);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.008199462);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.002897964);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.009290291);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.01469046);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.01763327);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.01835333);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.01893877);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.01944269);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.02044164);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.02368233);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.02953336);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.03733077);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.04649789);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.05491498);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.06332041);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.06582059);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.04315707);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.03045529);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.02255588);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.01745565);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.01354331);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.01028374);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.00805366);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.00571228);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.004229413);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.00299075);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.001682004);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.000973152);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(155966);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","ZHcc","F");

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
   H_dR_seljet_16->Modified();
   H_dR_seljet_16->cd();
   H_dR_seljet_16->SetSelected(H_dR_seljet_16);
}

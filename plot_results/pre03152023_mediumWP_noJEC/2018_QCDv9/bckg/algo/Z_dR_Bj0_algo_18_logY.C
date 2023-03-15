#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,-0.3779267,7.029799,6.718535);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLogy();
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(525030.7);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(2.976109);
   st_stack_115->SetMaximum(1020679);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
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
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,87493.16);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,423283.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,268657.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,205947.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,118946);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,192255.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,49315.07);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,45941.88);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,31547.16);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,24392.41);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,12562.45);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,7537.818);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,6540.437);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,2253.875);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,4332.288);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,2313.936);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,2500.793);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,562.0111);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,2140.41);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,151.8463);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,60.73851);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,391.3706);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,42.74725);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,31.00036);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,1749.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,4313.991);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,26783.64);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,13057.88);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,12816.49);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,9641.938);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,49929.93);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,6447.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,22445.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,6251.832);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,5436.456);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,3345.978);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,2688.027);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,2621.576);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,776.1361);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,1960.405);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1772.233);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1803.914);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,351.2981);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1770.853);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,67.90771);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,42.94861);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,344.2692);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,32.79491);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,30.37581);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1737.066);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(24627);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,1766.731);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,12492.18);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,18536.05);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,16633.87);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,11690.71);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,7420.969);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,4651.234);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,2953.434);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,1950.359);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1320.321);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,899.473);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,614.2626);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,438.3952);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,300.2875);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,206.3158);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,141.6646);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,103.7168);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,68.99125);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,48.45021);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,34.37046);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,22.09655);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,15.94968);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,9.850861);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,6.428736);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,4.547312);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,3.045068);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.977157);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.876309);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.126458);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.6951175);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.848081);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,10.4007);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,27.64249);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,33.64269);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,31.84432);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,26.69144);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,21.23298);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,16.80133);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,13.35999);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,10.85252);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,8.917837);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,7.347195);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,6.065751);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.125435);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.242589);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,3.519175);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,2.9154);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.504061);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.03511);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.699084);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.424396);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.141882);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,0.9885344);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.7623959);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.6175229);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.5188992);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.4239394);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.3320556);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.3378006);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.2574171);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2044662);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.3342817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(1407385);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}

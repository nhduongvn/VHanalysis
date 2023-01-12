#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_all = new TCanvas("Z_dR_Bj1_algo_all", "Z_dR_Bj1_algo_all",0,0,600,600);
   Z_dR_Bj1_algo_all->SetHighLightColor(2);
   Z_dR_Bj1_algo_all->Range(-1.310117,-0.5296878,7.029799,3.884377);
   Z_dR_Bj1_algo_all->SetFillColor(0);
   Z_dR_Bj1_algo_all->SetFillStyle(4000);
   Z_dR_Bj1_algo_all->SetBorderMode(0);
   Z_dR_Bj1_algo_all->SetBorderSize(2);
   Z_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.442971);
   
   TH1F *st_stack_112 = new TH1F("st_stack_112","",30,0,6);
   st_stack_112->SetMinimum(0);
   st_stack_112->SetMaximum(3.442971);
   st_stack_112->SetDirectory(0);
   st_stack_112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_112->SetLineColor(ci);
   st_stack_112->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_112->GetXaxis()->SetRange(1,30);
   st_stack_112->GetXaxis()->SetLabelFont(42);
   st_stack_112->GetXaxis()->SetTitleOffset(1);
   st_stack_112->GetXaxis()->SetTitleFont(42);
   st_stack_112->GetYaxis()->SetTitle("Events/0.2");
   st_stack_112->GetYaxis()->SetLabelFont(42);
   st_stack_112->GetYaxis()->SetTitleSize(0.037);
   st_stack_112->GetYaxis()->SetTitleFont(42);
   st_stack_112->GetZaxis()->SetLabelFont(42);
   st_stack_112->GetZaxis()->SetTitleOffset(1);
   st_stack_112->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_112);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(1,0.001440646);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,0.4338277);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,1.38871);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,1.750612);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,1.475113);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,0.9423955);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.5692088);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.3160663);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.1597618);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.1124885);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.09831498);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.04786328);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.05477364);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.04619385);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.02531509);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.03572034);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.01716918);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.01143864);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.009293689);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.003910501);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.003027725);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.003910501);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(1,0.001440646);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,0.02864739);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,0.05108006);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,0.05764655);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,0.05270927);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,0.04253336);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,0.03277253);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,0.02442314);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,0.01710414);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,0.01437372);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,0.01341759);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,0.009401262);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,0.009893145);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,0.00963268);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,0.006920072);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,0.008143902);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,0.005242421);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(18,0.004781696);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(19,0.004646845);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(20,0.002813736);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(21,0.002143427);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(22,0.002813736);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(24,0.001587079);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(4155);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,0.09169979);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,0.451702);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,0.5447015);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.3491104);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.1785801);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.09767529);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.05200324);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.03323989);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.02648277);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.01351124);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.01622357);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.01352124);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.01426253);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.006488532);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.008800051);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.005702847);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.002897164);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.001874765);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.001489891);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.0007042058);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.0002207758);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,0.004943393);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,0.01097213);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,0.01211315);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,0.009676383);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,0.006888748);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,0.005097077);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,0.003767487);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,0.002933769);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,0.002681435);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,0.001831124);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,0.00206981);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,0.001870093);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,0.001983952);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,0.001236516);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,0.001542372);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,0.001145888);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,0.0008631193);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,0.0007307005);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(20,0.0006317959);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(23,0.0004280818);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(24,0.0002207758);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0003441339);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(7690);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_all->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->SetSelected(Z_dR_Bj1_algo_all);
}

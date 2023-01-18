#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(-1.310117,-245786.9,7.029799,1802437);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetFillStyle(4000);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1597615);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0);
   st_stack_117->SetMaximum(1597615);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_117->GetXaxis()->SetRange(1,30);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetTitleSize(0.037);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,2487.896);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,741741.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,1054917);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,795598.5);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,556378.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,498573.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,354381.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,243008.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,219613.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,215260.5);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,148231.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,125137.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,93688.81);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,63815.02);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,49915.85);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,74951.59);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,38700.56);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,45461.14);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,14064.36);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,6251.674);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,6375.691);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,7144.726);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,4373.951);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,1126.071);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,425.6197);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,369.8556);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,49.18675);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,1428.681);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,1516.73);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,55788.13);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,75221.99);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,73601.87);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,56909.68);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,58557.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,47994.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,41251.35);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,37989.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,43945.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,33510.38);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,29260.54);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,24058);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,17553.37);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,17026.29);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,23682.33);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,16799.24);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,23166.55);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,3880.176);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,2536.314);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,2554.308);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,2904.136);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,2100.359);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,538.3314);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,312.4079);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,310.5076);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,34.13065);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,1418.59);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(33722);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,2.126131);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,3662.378);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,10159.2);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,13441.7);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,13612.44);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,11799.68);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,9415.163);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,7181.107);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,5486.109);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,4217.968);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,3316.255);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,2659.247);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,2195.389);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,1864.873);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,1606.449);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,1400.423);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,883.4577);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,564.0874);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,369.3948);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,242.3661);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,152.253);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,96.16776);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,58.70757);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,38.89371);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,19.93983);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,13.11677);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,9.356891);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,5.084043);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,2.950628);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,2.151612);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,3.811948);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.362283);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,15.1992);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,25.35957);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,29.17701);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,29.31979);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,27.24641);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,24.26913);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,21.11447);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,18.41212);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,16.08835);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,14.2134);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,12.70073);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,11.54406);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,10.62084);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,9.845277);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,9.192658);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,7.309915);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,5.842713);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,4.730012);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,3.837503);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,3.041385);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,2.423758);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,1.888138);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,1.545707);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,1.085272);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,0.8933814);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,0.748881);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,0.5645087);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.4311619);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.366561);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,0.4880683);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(1587706);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}

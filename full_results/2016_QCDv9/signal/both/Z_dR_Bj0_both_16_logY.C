#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.310117,0.5342074,7.029799,2.605499);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetFillStyle(4000);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLogy();
   Z_dR_Bj0_both_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_16->SetBottomMargin(0.12);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(198.6683);
   
   TH1F *st_stack_161 = new TH1F("st_stack_161","",30,0,6);
   st_stack_161->SetMinimum(6.064045);
   st_stack_161->SetMaximum(250.2477);
   st_stack_161->SetDirectory(0);
   st_stack_161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_161->SetLineColor(ci);
   st_stack_161->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_161->GetXaxis()->SetRange(1,30);
   st_stack_161->GetXaxis()->SetLabelFont(42);
   st_stack_161->GetXaxis()->SetTitleOffset(1);
   st_stack_161->GetXaxis()->SetTitleFont(42);
   st_stack_161->GetYaxis()->SetTitle("Events/0.2");
   st_stack_161->GetYaxis()->SetLabelFont(42);
   st_stack_161->GetYaxis()->SetTitleSize(0.037);
   st_stack_161->GetYaxis()->SetTitleFont(42);
   st_stack_161->GetZaxis()->SetLabelFont(42);
   st_stack_161->GetZaxis()->SetTitleOffset(1);
   st_stack_161->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_161);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.3241454);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,1.119382);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,1.393105);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,1.177008);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,0.9220135);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,0.6324436);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.5042261);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.3688054);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.2967731);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.2377066);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.2016905);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.1570304);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.1584711);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.1685556);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.1123704);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.1210143);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.06771037);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.05474455);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.02305034);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.01296582);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.01440646);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.007203231);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,0.001440646);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.002881292);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,0.001440646);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,0.002881292);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.02160969);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.04015761);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.04479923);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.04117829);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.03644578);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.03018489);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.02695202);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.02305034);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.02067716);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.01850543);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.01704595);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.01504079);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.01510962);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.01558297);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.01272344);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.01320374);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.009876572);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.008880739);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.005762585);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.004321938);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.004555723);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.003221383);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,0.001440646);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.002037381);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,0.001440646);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,0.002037381);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,0.001440646);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(5612);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.1883176);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.5588316);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.5935785);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.4180435);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.2794158);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.1814762);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.1209842);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.09883974);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.08389675);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.06625323);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.06031204);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.05203039);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.04536906);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.04986996);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.04410881);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.04086816);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.02124424);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.0140428);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.009361869);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.00576115);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.003960791);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.003600719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.00180036);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.001080216);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.0005401079);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0007201438);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.000180036);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,0.0003600719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.000180036);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.0003600719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.005822709);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.01003044);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.01033758);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.008675417);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.007092594);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.005715964);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.004667065);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.004218377);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.003886442);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.003453688);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.003295199);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.003060611);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.002857982);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.002996395);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.002818008);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.002712515);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.001955691);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.001590034);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.001298258);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.001018437);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.0008444435);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0008051453);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.0005693237);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0004409962);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.0003118314);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0003600719);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.000180036);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.0002546093);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.000180036);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.0002546093);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}

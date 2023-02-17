#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-209173.6,7.029799,1533939);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1359628);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",30,0,6);
   st_stack_82->SetMinimum(0);
   st_stack_82->SetMaximum(1359628);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_82->GetXaxis()->SetRange(1,30);
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetTitleOffset(1);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Events/0.2");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,439.7435);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,655132.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,899566.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,684328.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,562318.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,502371.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,572873);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,412633.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,416393.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,386336.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,350259.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,274691.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,315301.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,261151.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,212961.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,116588.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,76689.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,60908.03);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,36729.05);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,13417.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,7737.091);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,1852.095);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,513.8392);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,407.1311);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,4.69705);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,14.92021);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,333.9508);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,40762.74);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,65778.59);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,57271.05);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,55900.69);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,49562.46);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,68782.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,50790.14);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,54362.49);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,54800.57);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,55760.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,42544);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,55148.57);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,42788.84);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,33002.97);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,27400.06);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,21180.01);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,23463.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,15545.26);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,3458.758);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2725.525);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,688.6118);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,235.7005);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,320.1917);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,4.69705);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,10.16102);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(40077);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,2.928416);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,3009.777);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,6852.574);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,9117.11);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,11449.53);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,12997.48);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,13791.59);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,13700.83);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,12849.88);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,11705.8);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,10296.71);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,9040.92);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,7966.331);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,7133.315);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,6103.338);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,2843.424);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,1422.971);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,726.3065);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,369.0175);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,191.0924);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,83.26173);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,38.20369);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,15.34952);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,6.389444);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,1.86759);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.6688941);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.1795174);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.4436649);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,14.61406);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,22.04366);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,25.44961);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,28.51008);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,30.39038);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,31.27971);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,31.10579);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,30.06859);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,28.64727);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,26.76019);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,25.00472);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,23.39873);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,22.06245);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,20.36466);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,13.8731);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,9.798745);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,6.977377);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,4.9378);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,3.556245);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.345401);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.576045);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.9620878);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.6457471);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.3295217);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.2028606);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.1090744);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2238310);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_18_logY()
{
//=========Macro generated from canvas: H_dR_seljet_18/H_dR_seljet_18
//=========  (Wed Jan 18 11:42:17 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_18 = new TCanvas("H_dR_seljet_18", "H_dR_seljet_18",0,0,600,600);
   H_dR_seljet_18->SetHighLightColor(2);
   H_dR_seljet_18->Range(-1.353788,0.06126759,7.264125,4.604864);
   H_dR_seljet_18->SetFillColor(0);
   H_dR_seljet_18->SetFillStyle(4000);
   H_dR_seljet_18->SetBorderMode(0);
   H_dR_seljet_18->SetBorderSize(2);
   H_dR_seljet_18->SetLogy();
   H_dR_seljet_18->SetLeftMargin(0.15709);
   H_dR_seljet_18->SetRightMargin(0.1234783);
   H_dR_seljet_18->SetBottomMargin(0.12);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(8895.146);
   
   TH1F *st_stack_279 = new TH1F("st_stack_279","",30,0,6);
   st_stack_279->SetMinimum(4.041095);
   st_stack_279->SetMaximum(14141.77);
   st_stack_279->SetDirectory(0);
   st_stack_279->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_279->SetLineColor(ci);
   st_stack_279->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_279->GetXaxis()->SetRange(1,31);
   st_stack_279->GetXaxis()->SetLabelFont(42);
   st_stack_279->GetXaxis()->SetTitleOffset(1);
   st_stack_279->GetXaxis()->SetTitleFont(42);
   st_stack_279->GetYaxis()->SetTitle("Events/0.2");
   st_stack_279->GetYaxis()->SetLabelFont(42);
   st_stack_279->GetYaxis()->SetTitleSize(0.037);
   st_stack_279->GetYaxis()->SetTitleFont(42);
   st_stack_279->GetZaxis()->SetLabelFont(42);
   st_stack_279->GetZaxis()->SetTitleOffset(1);
   st_stack_279->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_279);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,0.005254077);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.550726);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,3.123511);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,4.071414);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,5.121057);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,6.928595);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,8.553556);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,11.60442);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,15.23591);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,20.73619);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,27.91321);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,37.58645);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,49.10507);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,64.15769);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,70.01809);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,24.22596);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,10.16081);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,5.267885);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,2.948015);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,1.8151);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,1.142761);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.6959849);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.3753388);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.1881518);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.09842621);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.02211621);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,0.006668575);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,0.003735249);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.06408616);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.09072068);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.1035734);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.1163539);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.135178);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.151775);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.1744521);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.2027327);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.2339298);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.2733124);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.3155623);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.3614416);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.4145068);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.4319522);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.2539065);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.1632833);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.1164194);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.08912183);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.06856196);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.05441062);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.04234574);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.03244665);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.02224754);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.01567171);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.00699104);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,0.004248656);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(165424);

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
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,0.001138509);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.4258891);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,0.9999026);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,1.281048);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,1.487293);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,1.480439);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,1.560852);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1.770666);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,2.341551);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,3.658573);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,5.67533);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,8.91471);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,12.86173);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,17.13125);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,18.93336);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,8.246261);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,4.125666);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,2.264269);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,1.355647);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.815928);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.4832107);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.2647389);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.1614393);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.08307272);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.04718365);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.0207002);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.004741215);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,0.0005840077);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,0.0006894085);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.0127113);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.01956095);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.0225346);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.02418247);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.02381952);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.0244353);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.02596724);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.02985851);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.03765538);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.04695537);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.05879122);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.07025637);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.08113945);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.08566654);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.0563385);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.04000547);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.02942653);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.02276874);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.01758081);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.0138623);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.01007211);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.007864115);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.005635241);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.004280811);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.002889138);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.001345195);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,0.0005840077);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(280952);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_18->Modified();
   H_dR_seljet_18->cd();
   H_dR_seljet_18->SetSelected(H_dR_seljet_18);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.353788,-108219.1,7.264125,793606.9);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15709);
   H_dR_tags_16->SetRightMargin(0.1234783);
   H_dR_tags_16->SetBottomMargin(0.12);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(703424.3);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0);
   st_stack_21->SetMaximum(703424.3);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Event/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,85.70302);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,273959.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,266798.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,202785.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,205338);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,198985.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,202626.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,232400.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,227855.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,277978.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,322798.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,340358.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,370202.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,466686.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,509022.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,304558.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,229819.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,176873.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,142637.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,135831.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,119125);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,60157.04);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,46666.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,23817.53);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,10912.46);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,6399.26);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,3099.463);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,11.10776);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,42.35744);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,10816.89);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,10240.91);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,9428.16);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,10562.38);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,9739.84);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,9147.058);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,21689.14);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,9557.255);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,23922.76);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,24955.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,12349.22);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,12381.73);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,26151.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,27461.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,11963.97);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,10082);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,8659.893);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,7890.974);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,28083.06);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,24307.06);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,4996.022);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,4311.002);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,3489.545);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,1975.48);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,1129.759);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,1552.902);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,7.833943);
   VbbHcc_tags_H_dR_stack_1->SetEntries(247451);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,18.41499);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,18795.18);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,32930.91);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,38472.89);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,41071.74);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,39369.35);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,36798.38);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,36012.68);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,37828.16);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,42237.09);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,48646.22);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,56360.25);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,64962.51);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,73270.59);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,74819.43);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,43135.13);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,27394.56);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,18294.35);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,12309.59);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,8284.076);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,5419.154);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,3428.711);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,2100.847);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,1133.33);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,565.7657);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,235.1924);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,62.21224);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,5.033357);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.117725);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,36.0959);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,47.7442);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,51.5457);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,53.1937);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,52.08253);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,50.40508);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,49.91629);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,51.24887);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,54.22301);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,58.25758);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,62.81205);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,67.52084);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,71.80641);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,72.61343);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,54.96904);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,43.64434);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,35.52389);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,28.98117);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,23.6454);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,19.02899);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,15.03852);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,11.69018);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,8.545876);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,5.980215);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,3.830148);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.937006);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.5458045);
   VbbHcc_tags_H_dR_stack_2->SetEntries(1.175949e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}

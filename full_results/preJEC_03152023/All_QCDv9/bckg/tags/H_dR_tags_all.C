#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-457055.7,7.264125,3351742);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLeftMargin(0.15709);
   H_dR_tags_all->SetRightMargin(0.1234783);
   H_dR_tags_all->SetBottomMargin(0.12);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2970862);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0);
   st_stack_24->SetMaximum(2970862);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Event/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(2,1004.019);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,1118952);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,1133296);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,934237.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,845047.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,924729.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,897341.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,1008782);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,1102641);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,1232875);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,1234484);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,1410642);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,1790090);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,1931379);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,2132590);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,1377260);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,1023159);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,784328.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,586420.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,536998.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,372083.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,261660.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,191994.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,108721.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,56402.05);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,18910.42);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,6360.262);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,408.0823);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(2,478.3701);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,29666.74);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,25039.89);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,36557.78);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,28367.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,48539.21);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,32162.46);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,49772.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,52509.08);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,52436.41);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,36925.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,28587.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,77007.64);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,57956.08);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,75078.34);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,54249.29);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,46040.21);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,25782.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,28656.98);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,50589.84);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,27126.32);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,16261.68);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,22637.51);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,18342.67);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,6209.694);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,2369.818);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,1752.27);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,366.9577);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(777279);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,75.05879);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,82010.98);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,144992.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,170378.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,182886.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,176219.8);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,164877.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,161553.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,170124.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,189853.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,217889.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,251979.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,289573.9);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,326667);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,333225.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,189886.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,119094.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,78379.67);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,52059.98);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,34348.62);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,22108.23);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,13853.26);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,8211.922);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,4353.249);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,2106.989);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,849.1932);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,220.8753);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,16.23374);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,3.855357);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,80.25002);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,106.2714);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,114.9785);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,118.9739);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,116.9738);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,113.2955);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,112.5537);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,115.9345);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,122.1508);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,131.2296);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,140.9591);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,151.2338);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,161.1534);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,162.7695);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,122.6695);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,96.80079);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,77.82982);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,63.32622);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,50.80441);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,41.01512);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,32.1737);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,24.60524);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,17.52336);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,12.52578);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,7.72313);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,3.8329);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,1.035086);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(5.04042e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}

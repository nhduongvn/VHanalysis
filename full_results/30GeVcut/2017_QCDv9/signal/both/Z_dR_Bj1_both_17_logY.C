#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Tue Feb 14 16:07:57 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(-1.310117,0.4461226,7.029799,2.952332);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetLogy();
   Z_dR_Bj1_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_17->SetBottomMargin(0.12);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(382.2108);
   
   TH1F *st_stack_182 = new TH1F("st_stack_182","",30,0,6);
   st_stack_182->SetMinimum(5.583001);
   st_stack_182->SetMaximum(503.1655);
   st_stack_182->SetDirectory(0);
   st_stack_182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_182->SetLineColor(ci);
   st_stack_182->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_182->GetXaxis()->SetRange(1,30);
   st_stack_182->GetXaxis()->SetLabelFont(42);
   st_stack_182->GetXaxis()->SetTitleOffset(1);
   st_stack_182->GetXaxis()->SetTitleFont(42);
   st_stack_182->GetYaxis()->SetTitle("Events/0.2");
   st_stack_182->GetYaxis()->SetLabelFont(42);
   st_stack_182->GetYaxis()->SetTitleSize(0.037);
   st_stack_182->GetYaxis()->SetTitleFont(42);
   st_stack_182->GetZaxis()->SetLabelFont(42);
   st_stack_182->GetZaxis()->SetTitleOffset(1);
   st_stack_182->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_182);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.6162979);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,2.26292);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,2.790724);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,2.322969);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,1.872598);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,1.365337);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,1.041386);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.7458785);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.6194584);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.4456308);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.3855813);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.3413342);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.2528402);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.2401982);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.2228154);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.1690869);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.1374818);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.05214829);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.03160502);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,0.01896301);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.007901256);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.01896301);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,0.007901256);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.03120746);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.05979951);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.06640816);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.06058774);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.0543983);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.04644971);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.04056662);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.03433184);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.03128738);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.02653693);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.02468431);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.02322485);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.01998877);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.01948264);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.01876444);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.01634624);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.0147396);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.009077852);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.007067098);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,0.005474151);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.003533549);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.005474151);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,0.003533549);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(10111);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.2474659);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.9354711);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,1.031385);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.7984514);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.5154848);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.3180519);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.2138338);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.153213);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.1222797);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.1025572);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.09155409);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.07847494);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.06726423);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.06498057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.06269691);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.0550155);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.02823437);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.01889211);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.01287155);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.007473804);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.006643381);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.003529296);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.002491268);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.001660845);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,0.00145324);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,0.000622817);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.007167659);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01393589);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.01463289);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.0128749);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.01034493);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.008125846);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.006662816);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.005639847);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.005038449);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.004614266);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.004359719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.004036315);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.003736902);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.003672919);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.003607802);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.003379575);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.002421077);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001980432);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.001634689);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.001245634);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.001174395);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.00085598);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0007191671);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0005871975);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.0005492729);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.0003595835);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(23807);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Thu Mar  9 13:08:27 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.310117,-0.06348713,7.029799,0.1946014);
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
   st->SetMinimum(1);
   st->SetMaximum(1.430515);
   
   TH1F *st_stack_177 = new TH1F("st_stack_177","",30,0,6);
   st_stack_177->SetMinimum(0.9278622);
   st_stack_177->SetMaximum(1.475002);
   st_stack_177->SetDirectory(0);
   st_stack_177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_177->SetLineColor(ci);
   st_stack_177->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_177->GetXaxis()->SetRange(1,30);
   st_stack_177->GetXaxis()->SetLabelFont(42);
   st_stack_177->GetXaxis()->SetTitleOffset(1);
   st_stack_177->GetXaxis()->SetTitleFont(42);
   st_stack_177->GetYaxis()->SetTitle("Event/0.2");
   st_stack_177->GetYaxis()->SetLabelFont(42);
   st_stack_177->GetYaxis()->SetTitleSize(0.037);
   st_stack_177->GetYaxis()->SetTitleFont(42);
   st_stack_177->GetZaxis()->SetLabelFont(42);
   st_stack_177->GetZaxis()->SetTitleOffset(1);
   st_stack_177->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_177);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.2242706);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,0.7712721);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,0.7986222);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,0.5552065);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,0.3282009);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,0.2270056);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.1476904);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.1148703);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.1039303);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.0738452);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.05196514);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.07111019);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.04923013);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.05743516);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.07111019);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.04923013);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.03008508);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.01367504);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.008205022);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.02476655);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.04592859);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.04673583);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.03896786);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.02996051);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.0249171);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.02009812);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.01772487);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.01685972);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.01421152);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.01192162);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.01394586);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.01160365);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.01253338);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.01394586);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.01160365);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.009070994);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.006115663);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.004737172);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(1377);

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
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.07716942);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,0.3597667);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,0.3887052);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.2350809);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.1261148);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.06895231);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.05573347);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.04215737);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.03286846);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.03322572);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.0303676);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.02250775);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.02322228);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.01679149);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.02143595);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.0157197);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.009646178);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.005358988);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.003215393);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.003215393);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.0007145317);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.001786329);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.005250714);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.01133721);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.01178436);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.009164409);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.006712416);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.004963296);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.004462249);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.0038809);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.003426774);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.003445347);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.003293828);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.00283571);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.002880369);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.002449291);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.002767369);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.002369834);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.001856408);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.001383685);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.001071798);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0005052502);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0007988707);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(4411);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}

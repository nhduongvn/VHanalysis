void Z_dR_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Thu Feb  9 09:44:32 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.1199,7.029799,0.8792668);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLogy();
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
   st->SetMinimum(1e+10);
   st->SetMaximum(74.22382);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",30,0,6);
   st_stack_82->SetMinimum(-3.262932e+09);
   st_stack_82->SetMaximum(-46.45604);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_82->GetXaxis()->SetRange(1,30);
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetLabelSize(0.035);
   st_stack_82->GetXaxis()->SetTitleSize(0.035);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Events/0.2");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetLabelSize(0.035);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleOffset(0);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetLabelSize(0.035);
   st_stack_82->GetZaxis()->SetTitleSize(0.035);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.2403178);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.4158041);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.5341286);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.5338925);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.4602532);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.4309263);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.346716);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.2566575);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.1750801);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.1262727);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.07383144);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.0566211);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.05374077);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.02452392);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.01344892);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.009656928);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.001927338);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.001932501);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.02170994);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.02825559);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.03187656);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.03179716);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.03022041);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.02928673);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.02564809);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.02258419);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.01789022);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.01543327);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.01184811);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.01043031);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.009942777);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.006485301);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.00479994);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.004084185);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.001927338);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.001932501);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(2209);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.05083831);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.1276184);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.2020867);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.2083456);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.1831987);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.1003258);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.05834084);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.03793571);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.0214124);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.01472906);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.008957624);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.01484046);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.009779679);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.01170487);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.002845741);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.00188976);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0006161023);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0008863965);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.000818426);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0004777619);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.003470522);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.005546602);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.007009446);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.007098562);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.006686126);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.004920223);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.003756025);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.003036859);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.002274658);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001885403);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001461699);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001905684);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.00151972);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.001685109);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0008467183);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.000682823);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0004357834);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0004603403);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0004113458);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0003463006);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(4555);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_all/Z_dR_Bj0_tags_all
//=========  (Wed Jan 18 11:40:23 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_all = new TCanvas("Z_dR_Bj0_tags_all", "Z_dR_Bj0_tags_all",0,0,600,600);
   Z_dR_Bj0_tags_all->SetHighLightColor(2);
   Z_dR_Bj0_tags_all->Range(-1.310117,-1.641847,7.029799,12.04021);
   Z_dR_Bj0_tags_all->SetFillColor(0);
   Z_dR_Bj0_tags_all->SetFillStyle(4000);
   Z_dR_Bj0_tags_all->SetBorderMode(0);
   Z_dR_Bj0_tags_all->SetBorderSize(2);
   Z_dR_Bj0_tags_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_all->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(10.67201);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",30,0,6);
   st_stack_52->SetMinimum(0);
   st_stack_52->SetMaximum(10.67201);
   st_stack_52->SetDirectory(0);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_52->GetXaxis()->SetRange(1,30);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetTitleOffset(1);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/0.2");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetTitleSize(0.037);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetTitleOffset(1);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(1,1.207861);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(2,4.025261);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(3,5.177755);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(4,4.519475);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(5,3.527663);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(6,2.693228);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(7,2.016542);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(8,1.433056);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(9,1.050451);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.9230022);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.7750725);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.6047449);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.5252407);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.5047413);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.4359922);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.4061027);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.2443468);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.161911);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(19,0.1189287);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(20,0.06697648);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(21,0.0380159);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(22,0.02457874);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(23,0.006087491);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(24,0.01228937);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(25,0.006938226);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(26,0.004468371);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(1,0.04776519);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(2,0.08726724);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(3,0.09880883);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(4,0.09250568);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(5,0.08151106);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(6,0.07158495);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(7,0.06203348);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(8,0.05198306);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(9,0.04432216);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(10,0.04170138);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(11,0.03806561);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(12,0.03394869);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(13,0.03150459);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(14,0.03069632);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(15,0.02869912);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(16,0.02781453);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(17,0.0211661);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(18,0.01716058);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(19,0.01506874);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(20,0.01125341);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(21,0.008288584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(22,0.006708794);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(23,0.003587763);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(24,0.004743834);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(25,0.003537144);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(26,0.002582584);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetBinError(27,0.001440646);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetEntries(16887);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.5064402);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(2,1.800692);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(3,1.936918);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(4,1.446525);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.9578274);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.5817164);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.3915377);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.2911048);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.2447253);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.1983261);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.170117);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.1556522);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.1394153);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.1269199);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.1278171);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.1133401);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.0576242);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.04066317);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.02741483);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(20,0.01945007);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.01131828);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(22,0.00932536);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(23,0.003920702);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(24,0.003354654);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.001269115);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(26,0.001629187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.0007449456);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.0003600719);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(30,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinContent(31,0.0005241698);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(1,0.01155467);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(2,0.02197276);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(3,0.02273195);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(4,0.01968064);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(5,0.0159785);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(6,0.01242494);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(7,0.01017137);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(8,0.008762971);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(9,0.008028496);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(10,0.007260716);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(11,0.006632623);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(12,0.006435569);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(13,0.006076686);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(14,0.00573249);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(15,0.005791607);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(16,0.00547187);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(17,0.003859153);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(18,0.003288393);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(19,0.002691645);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(20,0.002285129);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(21,0.001670717);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(22,0.001597014);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(23,0.0009882944);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(24,0.000888176);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0005919663);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(26,0.0006443989);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(27,0.0004467472);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(28,0.0002546093);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(29,0.000180036);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(30,0.0003441339);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetBinError(31,0.0003883826);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetEntries(38012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_all->Modified();
   Z_dR_Bj0_tags_all->cd();
   Z_dR_Bj0_tags_all->SetSelected(Z_dR_Bj0_tags_all);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_18_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_18/Aplanarity_seljet_18
//=========  (Tue Feb 14 16:02:06 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_18 = new TCanvas("Aplanarity_seljet_18", "Aplanarity_seljet_18",0,0,600,600);
   Aplanarity_seljet_18->SetHighLightColor(2);
   Aplanarity_seljet_18->Range(-0.2183529,-1.720101,1.171633,14.15602);
   Aplanarity_seljet_18->SetFillColor(0);
   Aplanarity_seljet_18->SetFillStyle(4000);
   Aplanarity_seljet_18->SetBorderMode(0);
   Aplanarity_seljet_18->SetBorderSize(2);
   Aplanarity_seljet_18->SetLogy();
   Aplanarity_seljet_18->SetLeftMargin(0.15709);
   Aplanarity_seljet_18->SetRightMargin(0.1234783);
   Aplanarity_seljet_18->SetBottomMargin(0.12);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   Aplanarity_seljet_18->SetFrameFillStyle(1000);
   Aplanarity_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.152372e+12);
   
   TH1F *st_stack_319 = new TH1F("st_stack_319","",50,0,1);
   st_stack_319->SetMinimum(1.531207);
   st_stack_319->SetMaximum(3.701785e+12);
   st_stack_319->SetDirectory(0);
   st_stack_319->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_319->SetLineColor(ci);
   st_stack_319->GetXaxis()->SetTitle("Aplanarity");
   st_stack_319->GetXaxis()->SetRange(1,50);
   st_stack_319->GetXaxis()->SetLabelFont(42);
   st_stack_319->GetXaxis()->SetTitleOffset(1);
   st_stack_319->GetXaxis()->SetTitleFont(42);
   st_stack_319->GetYaxis()->SetTitle("Events/0.02");
   st_stack_319->GetYaxis()->SetLabelFont(42);
   st_stack_319->GetYaxis()->SetTitleSize(0.037);
   st_stack_319->GetYaxis()->SetTitleFont(42);
   st_stack_319->GetZaxis()->SetLabelFont(42);
   st_stack_319->GetZaxis()->SetTitleOffset(1);
   st_stack_319->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_319);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(0,581.3313);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,1.151442e+10);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,5.586027e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,2.900526e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,1.644302e+09);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,9.834213e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,6.16047e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,3.990359e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,2.600861e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,1.725324e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,1.154777e+08);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,7.812214e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,5.039351e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,3.413538e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,2.313697e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,1.457049e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,8732966);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,5706252);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,2830844);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,1590554);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,750773.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,355887.6);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,113793.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,51977.82);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(24,2629.105);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(25,42.64568);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(0,384.8676);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,1.024852e+07);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,7607804);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,5583017);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,4326195);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,3256866);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,2680018);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,2080665);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,1680902);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,1435230);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,1100140);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,920205.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,727081.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,663967.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,528765.2);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,405807.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,302909.5);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,266919.7);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,161235);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,132498.8);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,87305.1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,54946.43);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,34419.29);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,32708.96);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(24,2196.995);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(25,42.64568);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(6.787727e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(0,1.882997);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,9300599);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,7146746);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,4826436);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,3306839);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,2316600);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,1649160);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,1187427);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,858655.2);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,621451.1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,447962.5);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,320807.7);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,227179);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,158363.5);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,108394.5);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,72408.56);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,46919.86);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,29159.47);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,17202.27);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,9520.71);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,4768.331);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,2138.233);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,785.9258);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,218.0732);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,28.85482);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(25,0.8921791);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(0,0.3921134);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,938.8873);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,825.846);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,678.3411);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,562.3722);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,470.6005);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,397.3658);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,336.997);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,286.6011);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,244.2148);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,206.6196);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,175.2151);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,148.6453);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,122.8575);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,101.9017);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,83.5233);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,67.03953);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,52.64786);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,40.48773);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,30.30319);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,21.18984);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,14.10168);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,8.574979);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,5.65097);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,1.532824);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(25,0.2653836);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(4.294316e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_18->Modified();
   Aplanarity_seljet_18->cd();
   Aplanarity_seljet_18->SetSelected(Aplanarity_seljet_18);
}

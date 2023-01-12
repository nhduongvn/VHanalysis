#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Mon Dec 19 11:11:21 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-0.9094552,7.029799,6.669338);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.911459);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0);
   st_stack_20->SetMaximum(5.911459);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,0.9420508);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,1.635292);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,2.35793);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,2.668891);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,2.6374);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,2.526002);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,2.287823);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,1.991576);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,1.788844);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,1.76655);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,1.755961);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,1.755637);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,1.936349);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,1.808987);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,0.6663778);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,0.3052789);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,0.1422781);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,0.1044156);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,0.04710827);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,0.04563089);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,0.01418838);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,0.02113839);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,0.01022278);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,0.001493284);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,0.04502346);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,0.05885278);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,0.071991);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,0.07647904);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,0.07650867);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,0.07365452);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,0.07042366);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,0.06602415);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,0.06157677);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,0.06117796);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,0.06121436);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,0.06026074);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,0.06387942);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,0.06256301);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,0.03835523);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,0.02524422);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,0.01690427);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,0.01445276);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,0.009610549);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,0.009206243);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,0.005014141);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,0.006826993);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,0.004217166);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,0.001493284);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(16994);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,0.3793141);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,0.7871477);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,1.164882);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,1.272082);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,1.033799);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,0.7185703);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,0.5177382);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,0.4327295);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,0.3871437);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,0.3793988);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,0.390376);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,0.4084901);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,0.4350445);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,0.4433895);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,0.2060382);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,0.1130188);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,0.06642337);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,0.03621295);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,0.02693085);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,0.01371587);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,0.008295485);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,0.004426222);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,0.002075658);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,0.0004407587);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,0.0003904085);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,0.00018361);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,0.01065347);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,0.01525314);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,0.0185266);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,0.01952765);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,0.01755613);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,0.0145328);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,0.0123355);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,0.01122798);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,0.01067528);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,0.01043644);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,0.01067025);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,0.01085092);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,0.01118712);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,0.01132418);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,0.007743248);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,0.005676631);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,0.004312695);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,0.003127918);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,0.002743641);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,0.001984058);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,0.001495276);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,0.001140156);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,0.0008039819);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,0.0004027431);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,0.0002903729);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,0.00018361);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(38313);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","ZHcc","F");

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
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}

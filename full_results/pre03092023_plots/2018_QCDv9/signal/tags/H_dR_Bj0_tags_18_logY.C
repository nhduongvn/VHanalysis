#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(-1.310117,-3.45645,7.029799,0.3897038);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetFillStyle(4000);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetLogy();
   H_dR_Bj0_tags_18->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_18->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_18->SetBottomMargin(0.12);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",30,0,6);
   st_stack_43->SetMinimum(18.31316);
   st_stack_43->SetMaximum(1.011785);
   st_stack_43->SetDirectory(0);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_43->GetXaxis()->SetRange(1,30);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetTitleOffset(1);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Event/0.2");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetTitleSize(0.037);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetTitleOffset(1);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.1345745);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,0.6985055);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,0.8715298);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,0.812253);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,0.5398999);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,0.4357649);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.2979863);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.2034638);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.2162804);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.1618098);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.1233599);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.1105433);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.1089412);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.0897163);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.09292046);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.05767477);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.04325607);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.03043946);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.01602077);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.01121454);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.006408307);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.006408307);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.004806231);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.006408307);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,0.001602077);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.01468328);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.03345235);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.03736653);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.03607342);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.02941022);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.02642213);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.02184941);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.01805449);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.01861445);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.01610067);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.01405817);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.01330785);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.01321106);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.01198885);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.01220105);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.009612461);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.008324635);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.006983291);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.005066212);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.004238697);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.003204154);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.003204154);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.002774878);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.003204154);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,0.001602077);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.05780045);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.2839394);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.3647335);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.3153711);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.264321);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.1797299);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.1345864);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.08965398);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.07109033);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.06117566);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.04999528);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.04767482);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.04303391);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.03776015);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.03480684);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.03417399);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.02425931);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.01307893);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.009281824);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.00780517);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.00400806);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.002320456);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.002742357);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.001054753);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.001265703);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.0008438022);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.0004219011);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.003491853);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.007739327);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.008771586);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.008156451);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.007467173);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.006157444);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.005328328);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.004348857);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.003872537);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.003592358);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.003247542);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.003171282);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.003012976);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.002822326);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.002709709);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.002684962);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.002262193);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.001661026);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.001399288);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.001283162);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.0009195121);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.0006996438);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.000760593);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.0004716998);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0005167212);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0004219011);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0002983291);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}

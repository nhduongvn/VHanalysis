#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.353788,-0.2795341,7.264125,2.049917);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15709);
   H_dR_both_17->SetRightMargin(0.1234783);
   H_dR_both_17->SetBottomMargin(0.12);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.816972);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(0);
   st_stack_150->SetMaximum(1.816972);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_150->GetXaxis()->SetRange(1,31);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetTitleOffset(1);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Events/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetTitleSize(0.037);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetTitleOffset(1);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.2123921);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.3852143);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.4607098);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.6169353);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.7138138);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,0.767337);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,0.8299558);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,0.8501911);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,0.8073104);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,0.7603714);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,0.8521596);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,0.9159065);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,0.9939134);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,0.9758258);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.3414863);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.2177095);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.1010352);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.06696787);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.0494625);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.04012377);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.01944504);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.01164204);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.003138135);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,0.002923655);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.01953831);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.02663507);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.0286342);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.03369263);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.03583867);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.03750959);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.03916275);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.03923324);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.0385562);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.03764446);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.03949372);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.04030422);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.04269986);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.04242387);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.02504804);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.01956765);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.01335253);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.01056797);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.009162831);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.00838209);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.00596042);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.004232208);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.002296413);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,0.001905132);
   VbbHcc_both_H_dR_stack_1->SetEntries(7351);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.05978712);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.1196355);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.16756);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.2456936);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.2726802);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.2643721);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.264812);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.2129114);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.200929);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.1900709);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.1878493);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.2191905);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.217401);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.2201207);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.1193557);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.06458629);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.04135897);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.02497195);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.0188594);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.01420757);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.006206469);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.004283917);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.0032869);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.0004644751);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.0001288878);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.003790148);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.005369908);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.006433683);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.007758514);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.008191005);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.008050644);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.008106035);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.007219976);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.007049914);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.006811234);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.006724078);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.007307577);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.007251569);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.007341544);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.00535834);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.003956829);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.003172575);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.002459939);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.002145098);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.001824971);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.001197477);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.000992884);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0008912674);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0003327574);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0001288878);
   VbbHcc_both_H_dR_stack_2->SetEntries(14825);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","ZHcc","F");

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
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}

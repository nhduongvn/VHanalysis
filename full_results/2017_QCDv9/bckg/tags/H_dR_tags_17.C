#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Wed Jan 18 11:43:10 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.353788,-1650151,7.264125,1.210111e+07);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.072598e+07);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(1.072598e+07);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,20383.18);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,2433806);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,3199311);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,2630784);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,2906647);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,2831484);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,3254381);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,3260658);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,3395544);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,3786708);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,4186109);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,4725351);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,5845343);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,6242258);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,6879276);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,4611849);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,3386998);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,2879997);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,2472764);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,1602588);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,1270158);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,913605.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,563875.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,439482.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,219595.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,74323.93);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,39734.54);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,2620.349);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,18764.91);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,111040.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,137015.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,124852.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,145329);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,140756);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,164096.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,156841);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,155157.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,163189.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,171122.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,187041.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,216821.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,211643.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,234328.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,188679.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,161806.6);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,157176.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,149468.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,109378.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,99908.34);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,88511.07);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,62384.06);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,63664.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,43395.21);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,21984.41);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,17891.71);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,1907.634);
   VbbHcc_tags_H_dR_stack_1->SetEntries(539309);

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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,44.93182);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,63813.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,115887.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,140912.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,169459.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,185278.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,190816.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,193400);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,197452.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,206305.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,219597.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,236791.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,255802.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,274623.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,271378);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,156014.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,100156.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,67920.56);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,46451.69);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,31333.62);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,20649.02);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,13216.74);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,7912.875);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,4287.293);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,2064.807);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,847.2667);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,226.8198);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,13.49765);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.810954);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,68.75787);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,92.81379);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,102.3548);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,112.2069);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,117.3349);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,119.1414);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,120.0495);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,121.4308);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,124.2649);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,128.3598);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,133.436);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,138.8761);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,143.9889);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,143.1881);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,108.2436);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,86.37056);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,70.82061);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,58.27788);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,47.62167);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,38.46004);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,30.59853);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,23.53704);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,17.19392);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,11.87648);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,7.531322);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,3.851727);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.8994083);
   VbbHcc_tags_H_dR_stack_2->SetEntries(4.693889e+07);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}

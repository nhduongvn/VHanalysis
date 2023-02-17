#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Feb 16 10:35:18 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.353788,-0.121454,7.264125,0.8906626);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15709);
   H_dR_tags_16->SetRightMargin(0.1234783);
   H_dR_tags_16->SetBottomMargin(0.12);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.7894509);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0);
   st_stack_21->SetMaximum(0.7894509);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.1047073);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.214505);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.3096268);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.3695406);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.3360251);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.3103426);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.3014588);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.2034775);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.1777487);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.1951291);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.2119726);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.2274687);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.2824912);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.2843772);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.1288576);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.07171014);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.03999455);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.02117309);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.005776459);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.008659748);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.01793881);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.003211022);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,0.002891781);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.01772222);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.02548255);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.03008093);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.03312748);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.03165153);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.03047189);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.03033636);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.02499084);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.02250212);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.02394533);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.02485371);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.02553004);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.02963192);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.02901364);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.0194555);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.01446643);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.01040344);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.007745922);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.004085047);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.0050153);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.007356917);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.003211022);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,0.002891781);
   VbbHcc_tags_H_dR_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.03272445);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.07005986);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.1229939);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.15676);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.1797444);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.1547806);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.09977634);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.0991893);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.07875177);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.09014336);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.09294312);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.08897513);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.1058464);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.1053849);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.0508204);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.02824213);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.02372804);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.01007266);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.01182268);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.005360145);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.002958533);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.002096563);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.002395678);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.001848126);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.0007055996);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.003479898);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.005149265);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.0068435);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.007757205);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.008311204);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.007679284);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.006187435);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.006151166);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.005482761);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.005865075);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.00596824);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.005824187);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.00637317);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.006310574);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.004413967);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.003277515);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.003002684);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.001921052);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.002103326);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.001394511);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001051822);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0008581747);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0009143502);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0008278525);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0004989767);
   VbbHcc_tags_H_dR_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}

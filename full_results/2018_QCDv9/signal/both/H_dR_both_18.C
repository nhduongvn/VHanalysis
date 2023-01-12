#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.353788,-0.3665103,7.264125,2.687742);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLeftMargin(0.15709);
   H_dR_both_18->SetRightMargin(0.1234783);
   H_dR_both_18->SetBottomMargin(0.12);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.382317);
   
   TH1F *st_stack_135 = new TH1F("st_stack_135","",30,0,6);
   st_stack_135->SetMinimum(0);
   st_stack_135->SetMaximum(2.382317);
   st_stack_135->SetDirectory(0);
   st_stack_135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_135->SetLineColor(ci);
   st_stack_135->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_135->GetXaxis()->SetRange(1,31);
   st_stack_135->GetXaxis()->SetLabelFont(42);
   st_stack_135->GetXaxis()->SetTitleOffset(1);
   st_stack_135->GetXaxis()->SetTitleFont(42);
   st_stack_135->GetYaxis()->SetTitle("Events/0.2");
   st_stack_135->GetYaxis()->SetLabelFont(42);
   st_stack_135->GetYaxis()->SetTitleSize(0.037);
   st_stack_135->GetYaxis()->SetTitleFont(42);
   st_stack_135->GetZaxis()->SetLabelFont(42);
   st_stack_135->GetZaxis()->SetTitleOffset(1);
   st_stack_135->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_135);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.2553393);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.5305992);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.708727);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.8083914);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.9432473);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,1.099096);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,1.16057);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,1.148618);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,1.192154);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,1.112874);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,1.174218);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,1.243143);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,1.196608);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,1.275555);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.54019);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.2918875);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.156383);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.09013505);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.06899573);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.04929481);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.01858142);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.01114059);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.002496094);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,0.005683742);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,0.002177811);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.02513061);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.03712752);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.04350203);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.04583014);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.05062567);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.05408255);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.05727508);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.05520239);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.056625);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.05439964);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.05518434);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.05701334);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.05477616);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.05933142);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.03937428);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.02701446);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.02016124);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.01470964);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.01323397);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.01108965);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.006523386);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.004724899);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.002496094);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,0.003364363);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,0.002177811);
   VbbHcc_both_H_dR_stack_1->SetEntries(6741);

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
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.1187548);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.2113811);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.2602623);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.3580195);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.4162188);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.4470418);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.3651721);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.35269);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.3170398);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.2986592);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.3088429);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.3107591);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.3408527);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.3126566);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.1689859);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.09901323);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.06084488);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.03571032);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.03024042);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.01766508);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.01103332);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.01027394);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.002841519);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.00206046);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.001170853);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.006883865);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.008943201);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.01000403);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.01171727);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.01269785);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.01320522);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.01177276);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.01161056);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.01095398);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.01066918);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.01088758);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.01087988);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.01146005);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.01096175);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.007912062);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.006062666);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.004796471);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.003602725);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.003378005);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.002538054);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.002038477);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.001987217);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0009843557);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0008111493);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.000868135);
   VbbHcc_both_H_dR_stack_2->SetEntries(14243);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}

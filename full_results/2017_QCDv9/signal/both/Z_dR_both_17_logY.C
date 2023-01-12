#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,0.578138,7.029799,2.437327);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15709);
   Z_dR_both_17->SetRightMargin(0.1234783);
   Z_dR_both_17->SetBottomMargin(0.12);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(144.792);
   
   TH1F *st_stack_130 = new TH1F("st_stack_130","",30,0,6);
   st_stack_130->SetMinimum(6.327623);
   st_stack_130->SetMaximum(178.4053);
   st_stack_130->SetDirectory(0);
   st_stack_130->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_130->SetLineColor(ci);
   st_stack_130->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_130->GetXaxis()->SetRange(1,30);
   st_stack_130->GetXaxis()->SetLabelFont(42);
   st_stack_130->GetXaxis()->SetTitleOffset(1);
   st_stack_130->GetXaxis()->SetTitleFont(42);
   st_stack_130->GetYaxis()->SetTitle("Events/0.2");
   st_stack_130->GetYaxis()->SetLabelFont(42);
   st_stack_130->GetYaxis()->SetTitleSize(0.037);
   st_stack_130->GetYaxis()->SetTitleFont(42);
   st_stack_130->GetZaxis()->SetLabelFont(42);
   st_stack_130->GetZaxis()->SetTitleOffset(1);
   st_stack_130->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_130);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.3581748);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.5992274);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.8693486);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,1.015175);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.9236059);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.9044718);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.8564682);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.7593981);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.7420353);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.6676365);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.6645382);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.720429);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.6726829);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.680589);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.2811158);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.1179584);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.05129483);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.04112016);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.01455834);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.01527674);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.01062894);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.005865016);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,0.00514705);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.02575062);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.03275401);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.0398146);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.04314357);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.04113942);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.04077205);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.03957381);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.03712669);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.03677802);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.03508205);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.03479411);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.03608871);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.03462743);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.03555831);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.02209684);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.01489901);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.009149391);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.008634659);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.004909182);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.004916016);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.00427903);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.003081434);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,0.002998255);
   VbbHcc_both_Z_dR_stack_1->SetEntries(7343);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.1130947);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.2502221);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.3917005);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.432745);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.3549368);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.2459275);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.1846341);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.156056);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.1458521);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.1352703);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.1424137);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.1503744);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.1578907);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.1536972);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.07448247);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.04277113);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.02885197);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.01210697);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.00997149);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.005480308);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.003982168);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.001612999);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0007281116);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,0.0002349844);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,0.0002588714);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.005261315);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.007831881);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.009784898);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.01027006);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.009364025);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.007756243);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.006693837);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.006203693);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.005967188);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.005781172);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.00587838);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.006063556);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.006169484);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.006095642);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.004273608);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.003206585);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.0026596);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.001647754);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.00158493);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.001107381);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0009464697);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0006161884);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0004053161);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,0.0002349844);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,0.0002588714);
   VbbHcc_both_Z_dR_stack_2->SetEntries(15101);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}

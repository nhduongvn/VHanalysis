#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_18_logY()
{
//=========Macro generated from canvas: H_pt_both_18/H_pt_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_18 = new TCanvas("H_pt_both_18", "H_pt_both_18",0,0,600,600);
   H_pt_both_18->SetHighLightColor(2);
   H_pt_both_18->Range(37.97653,-4.126035,1705.96,-0.2798807);
   H_pt_both_18->SetFillColor(0);
   H_pt_both_18->SetFillStyle(4000);
   H_pt_both_18->SetBorderMode(0);
   H_pt_both_18->SetBorderSize(2);
   H_pt_both_18->SetLogy();
   H_pt_both_18->SetLeftMargin(0.15709);
   H_pt_both_18->SetRightMargin(0.1234783);
   H_pt_both_18->SetBottomMargin(0.12);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",40,0,2000);
   st_stack_143->SetMinimum(40.69457);
   st_stack_143->SetMaximum(0.2165229);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_143->GetXaxis()->SetRange(7,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetTitleOffset(1);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Event/50.0");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetTitleSize(0.037);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetTitleOffset(1);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,0.5650465);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,1.176299);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,1.368537);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,0.9551779);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.6743002);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.4123895);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.2219164);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.1513892);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.05868953);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.03094526);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.01821891);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.01579006);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.001672286);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.0008755681);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.006209249);
   VbbHcc_both_H_pt_stack_1->SetBinContent(17,0.002325418);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.03289915);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.05158535);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.05205292);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.0432432);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.04863749);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.03152747);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.02045999);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.01700801);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01075681);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.007613118);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.005690558);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.005328802);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.001672286);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.0008755681);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.004761558);
   VbbHcc_both_H_pt_stack_1->SetBinError(17,0.002325418);
   VbbHcc_both_H_pt_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.1966927);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.4202474);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.6123662);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.5311514);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.3214209);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.1843156);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.08815814);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.05535671);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.02181448);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.01036601);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.004280672);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.003676762);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.001469939);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.001370298);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0002717431);
   VbbHcc_both_H_pt_stack_2->SetBinContent(20,0.0003052025);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.008035464);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.01041324);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.01249182);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.01230752);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.009327526);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.006873952);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.004988084);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.003740816);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.002333052);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.001623057);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.000968904);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.000931887);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0006054808);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0005799426);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0002717431);
   VbbHcc_both_H_pt_stack_2->SetBinError(20,0.0003052025);
   VbbHcc_both_H_pt_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   H_pt_both_18->Modified();
   H_pt_both_18->cd();
   H_pt_both_18->SetSelected(H_pt_both_18);
}

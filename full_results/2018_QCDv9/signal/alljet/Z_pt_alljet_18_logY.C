#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_alljet_18_logY()
{
//=========Macro generated from canvas: Z_pt_alljet_18/Z_pt_alljet_18
//=========  (Thu Feb 16 10:37:20 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_alljet_18 = new TCanvas("Z_pt_alljet_18", "Z_pt_alljet_18",0,0,600,600);
   Z_pt_alljet_18->SetHighLightColor(2);
   Z_pt_alljet_18->Range(37.97653,-0.1562467,1705.96,5.62501);
   Z_pt_alljet_18->SetFillColor(0);
   Z_pt_alljet_18->SetFillStyle(4000);
   Z_pt_alljet_18->SetBorderMode(0);
   Z_pt_alljet_18->SetBorderSize(2);
   Z_pt_alljet_18->SetLogy();
   Z_pt_alljet_18->SetLeftMargin(0.15709);
   Z_pt_alljet_18->SetRightMargin(0.1234783);
   Z_pt_alljet_18->SetBottomMargin(0.12);
   Z_pt_alljet_18->SetFrameFillStyle(1000);
   Z_pt_alljet_18->SetFrameBorderMode(0);
   Z_pt_alljet_18->SetFrameFillStyle(1000);
   Z_pt_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(63285.92);
   
   TH1F *st_stack_203 = new TH1F("st_stack_203","",40,0,2000);
   st_stack_203->SetMinimum(3.447499);
   st_stack_203->SetMaximum(111399.8);
   st_stack_203->SetDirectory(0);
   st_stack_203->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_203->SetLineColor(ci);
   st_stack_203->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_203->GetXaxis()->SetRange(7,30);
   st_stack_203->GetXaxis()->SetLabelFont(42);
   st_stack_203->GetXaxis()->SetTitleOffset(1);
   st_stack_203->GetXaxis()->SetTitleFont(42);
   st_stack_203->GetYaxis()->SetTitle("Events/50.0");
   st_stack_203->GetYaxis()->SetLabelFont(42);
   st_stack_203->GetYaxis()->SetTitleSize(0.037);
   st_stack_203->GetYaxis()->SetTitleFont(42);
   st_stack_203->GetZaxis()->SetLabelFont(42);
   st_stack_203->GetZaxis()->SetTitleOffset(1);
   st_stack_203->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_203);
   
   
   TH1D *VbbHcc_alljet_Z_pt_stack_1 = new TH1D("VbbHcc_alljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(1,632.8592);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(2,442.7289);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(3,65.62185);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(4,13.78464);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(5,4.472623);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(6,1.64509);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(7,0.6700285);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(8,0.3270931);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(9,0.1432495);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(10,0.05236911);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(11,0.04493446);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(12,0.02711519);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(13,0.02317015);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(14,0.008906828);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(15,0.003322577);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(16,0.009728655);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(1,1.437763);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(2,1.190668);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(3,0.4801305);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(4,0.2023096);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(5,0.115376);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(6,0.06787461);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(7,0.04650964);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(8,0.03102575);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(9,0.02001205);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(10,0.01260086);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(11,0.01073732);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(12,0.008619547);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(13,0.008005833);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(14,0.005182598);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(15,0.003322577);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(16,0.005620582);
   VbbHcc_alljet_Z_pt_stack_1->SetEntries(479240);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_pt_stack_2 = new TH1D("VbbHcc_alljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(1,61.87676);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(2,68.45155);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(3,24.23139);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(4,7.774815);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(5,2.549617);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(6,0.8831663);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(7,0.3065119);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(8,0.1267547);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(9,0.04944116);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(10,0.01706613);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(11,0.006673509);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(12,0.003252565);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(13,0.001129104);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(14,0.0006897069);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(15,0.0006776297);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(17,0.0003186975);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(18,0.0004199154);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(1,0.1580343);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(2,0.1647233);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(3,0.1006692);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(4,0.0540664);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(5,0.03194732);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(6,0.01871169);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(7,0.01039275);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(8,0.006748134);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(9,0.004178632);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(10,0.002454619);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(11,0.001506296);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(12,0.001048826);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(13,0.0006562592);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(14,0.0004894432);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(15,0.0004817431);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(17,0.0003186975);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(18,0.0004199154);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_alljet_Z_pt_stack_2->SetEntries(488139);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_alljet_18->Modified();
   Z_pt_alljet_18->cd();
   Z_pt_alljet_18->SetSelected(Z_pt_alljet_18);
}

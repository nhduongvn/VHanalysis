#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_all_logY()
{
//=========Macro generated from canvas: Z_pt_both_all/Z_pt_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_all = new TCanvas("Z_pt_both_all", "Z_pt_both_all",0,0,600,600);
   Z_pt_both_all->SetHighLightColor(2);
   Z_pt_both_all->Range(37.97653,-3.709945,1705.96,0.1362091);
   Z_pt_both_all->SetFillColor(0);
   Z_pt_both_all->SetFillStyle(4000);
   Z_pt_both_all->SetBorderMode(0);
   Z_pt_both_all->SetBorderSize(2);
   Z_pt_both_all->SetLogy();
   Z_pt_both_all->SetLeftMargin(0.15709);
   Z_pt_both_all->SetRightMargin(0.1234783);
   Z_pt_both_all->SetBottomMargin(0.12);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   Z_pt_both_all->SetFrameFillStyle(1000);
   Z_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",40,0,2000);
   st_stack_140->SetMinimum(23.15956);
   st_stack_140->SetMaximum(0.5644087);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_140->GetXaxis()->SetRange(7,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetTitleOffset(1);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Event/50.0");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetTitleSize(0.037);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetTitleOffset(1);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_both_Z_pt_all_stack_1 = new TH1D("VbbHcc_both_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(1,1.095087);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(2,2.472553);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(3,3.260192);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(4,2.314632);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(5,1.472173);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(6,0.902438);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(7,0.5184178);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(8,0.346915);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(9,0.1403692);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(10,0.06717494);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(11,0.03712231);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(12,0.01839791);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(13,0.01174501);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(14,0.01088577);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(15,0.006080625);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(16,0.002338418);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(17,0.008528823);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(18,0.001357181);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(26,0.001400973);
   VbbHcc_both_Z_pt_all_stack_1->SetBinContent(27,0.001289855);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(1,0.04480963);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(2,0.06628106);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(3,0.07573693);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(4,0.07184206);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(5,0.05396852);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(6,0.040525);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(7,0.02991114);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(8,0.02821288);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(9,0.01545784);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(10,0.01085357);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(11,0.008507827);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(12,0.005634955);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(13,0.004333475);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(14,0.004261562);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(15,0.003054238);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(16,0.002338418);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(17,0.005305462);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(18,0.001357181);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(26,0.001400973);
   VbbHcc_both_Z_pt_all_stack_1->SetBinError(27,0.001289855);
   VbbHcc_both_Z_pt_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_all_stack_2 = new TH1D("VbbHcc_both_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(1,0.3578353);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(2,0.8068253);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(3,1.43372);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(4,1.211894);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(5,0.7679835);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(6,0.4386163);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(7,0.2120052);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(8,0.1235469);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(9,0.04590099);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(10,0.02167511);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(11,0.006567848);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(12,0.004565005);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(13,0.001286645);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(14,0.001388215);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(15,0.0006546581);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(16,0.000972001);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(17,0.0002604199);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(19,0.0006833368);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(20,0.0002173642);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(21,0.0004391919);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(23,0.0002700861);
   VbbHcc_both_Z_pt_all_stack_2->SetBinContent(26,0.0001775376);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(1,0.009783829);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(2,0.0135191);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(3,0.01836903);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(4,0.01720122);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(5,0.01316694);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(6,0.0102048);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(7,0.006896868);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(8,0.005354564);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(9,0.00317009);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(10,0.002205505);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(11,0.001212107);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(12,0.001001375);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(13,0.0005135951);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(14,0.0005462676);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(15,0.0003952341);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(16,0.0004884821);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(17,0.0002604199);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(19,0.0003963752);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(20,0.0002173642);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(21,0.0003190548);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(23,0.0002700861);
   VbbHcc_both_Z_pt_all_stack_2->SetBinError(26,0.0001775376);
   VbbHcc_both_Z_pt_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_all_stack_1","ZHcc","F");

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
   Z_pt_both_all->Modified();
   Z_pt_both_all->cd();
   Z_pt_both_all->SetSelected(Z_pt_both_all);
}

#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_seljet_all_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_all/Z_pt_seljet_all
//=========  (Mon Dec 19 11:10:38 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_seljet_all = new TCanvas("Z_pt_seljet_all", "Z_pt_seljet_all",0,0,600,600);
   Z_pt_seljet_all->SetHighLightColor(2);
   Z_pt_seljet_all->Range(37.97653,-0.1025752,1705.96,5.368141);
   Z_pt_seljet_all->SetFillColor(0);
   Z_pt_seljet_all->SetFillStyle(4000);
   Z_pt_seljet_all->SetBorderMode(0);
   Z_pt_seljet_all->SetBorderSize(2);
   Z_pt_seljet_all->SetLogy();
   Z_pt_seljet_all->SetLeftMargin(0.15709);
   Z_pt_seljet_all->SetRightMargin(0.1234783);
   Z_pt_seljet_all->SetBottomMargin(0.12);
   Z_pt_seljet_all->SetFrameFillStyle(1000);
   Z_pt_seljet_all->SetFrameBorderMode(0);
   Z_pt_seljet_all->SetFrameFillStyle(1000);
   Z_pt_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(38568.82);
   
   TH1F *st_stack_236 = new TH1F("st_stack_236","",40,0,2000);
   st_stack_236->SetMinimum(3.580228);
   st_stack_236->SetMaximum(66232.2);
   st_stack_236->SetDirectory(0);
   st_stack_236->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_236->SetLineColor(ci);
   st_stack_236->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_236->GetXaxis()->SetRange(7,30);
   st_stack_236->GetXaxis()->SetLabelFont(42);
   st_stack_236->GetXaxis()->SetTitleOffset(1);
   st_stack_236->GetXaxis()->SetTitleFont(42);
   st_stack_236->GetYaxis()->SetTitle("Events/50.0");
   st_stack_236->GetYaxis()->SetLabelFont(42);
   st_stack_236->GetYaxis()->SetTitleSize(0.037);
   st_stack_236->GetYaxis()->SetTitleFont(42);
   st_stack_236->GetZaxis()->SetLabelFont(42);
   st_stack_236->GetZaxis()->SetTitleOffset(1);
   st_stack_236->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_236);
   
   
   TH1D *VbbHcc_seljet_Z_pt_all_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(1,331.617);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(2,385.6882);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(3,91.99022);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(4,21.89114);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(5,7.526704);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(6,2.781648);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(7,1.212124);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(8,0.496836);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(9,0.2183967);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(10,0.1107315);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(11,0.05479464);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(12,0.03380791);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(13,0.01433213);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(14,0.009542728);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(15,0.003430841);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(16,0.01325164);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(17,0.00743398);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(18,0.002900369);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinContent(19,0.004099362);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(1,0.8416625);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(2,0.9053027);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(3,0.4372788);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(4,0.2118825);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(5,0.1246389);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(6,0.07545769);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(7,0.05024462);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(8,0.03208421);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(9,0.02063997);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(10,0.0145329);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(11,0.01059547);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(12,0.008072433);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(13,0.004968693);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(14,0.003911939);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(15,0.002431686);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(16,0.005104734);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(17,0.003826826);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(18,0.002900369);
   VbbHcc_seljet_Z_pt_all_stack_1->SetBinError(19,0.002996);
   VbbHcc_seljet_Z_pt_all_stack_1->SetEntries(490549);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_all_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(1,66.91352);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(2,88.7762);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(3,39.11196);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(4,14.01494);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(5,5.437045);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(6,2.298763);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(7,1.042547);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(8,0.4870755);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(9,0.2396423);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(10,0.114972);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(11,0.06113197);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(12,0.03800923);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(13,0.01455463);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(14,0.01363061);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(15,0.005380864);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(16,0.004745076);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(17,0.002586158);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(18,0.002047638);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(19,0.001884076);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(20,0.000505842);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(21,0.0004239168);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(22,0.001044647);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(23,0.0001894086);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(24,0.0006880901);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(25,0.000215911);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinContent(26,0.0001480239);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(1,0.1397949);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(2,0.1612803);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(3,0.1067073);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(4,0.06382115);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(5,0.03963742);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(6,0.02621078);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(7,0.01757874);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(8,0.01194888);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(9,0.008363164);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(10,0.005724927);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(11,0.004239565);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(12,0.003389963);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(13,0.001999004);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(14,0.002137439);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(15,0.001332311);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(16,0.001256306);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(17,0.0007272199);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(18,0.0007254621);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(19,0.0008128898);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(20,0.0003074755);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(21,0.0003723401);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(22,0.0005686646);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(23,0.0001894086);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(24,0.0004036047);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(25,0.000215911);
   VbbHcc_seljet_Z_pt_all_stack_2->SetBinError(26,0.0001480239);
   VbbHcc_seljet_Z_pt_all_stack_2->SetEntries(908823);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_pt_all_stack_1","ZHcc","F");

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
   Z_pt_seljet_all->Modified();
   Z_pt_seljet_all->cd();
   Z_pt_seljet_all->SetSelected(Z_pt_seljet_all);
}

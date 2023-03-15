#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-881664.8,7.029799,6465542);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15709);
   Z_dR_both_16->SetRightMargin(0.1234783);
   Z_dR_both_16->SetBottomMargin(0.12);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5730821);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0);
   st_stack_145->SetMaximum(5730821);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Events/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,1199.107);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,2890763);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,3696150);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,2830390);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,2378332);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,2163354);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,2170275);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,2100210);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,2186821);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,2228590);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,2501694);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,2489064);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,3064399);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,3340514);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,3590362);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,2266732);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,1531367);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,1010174);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,611283.2);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,575974.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,342943.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,273640.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,151425.9);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,83398.36);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,43611.06);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,6951.913);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,2533.405);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,0.4453776);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,513.7345);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,87611.23);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,117898.9);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,116338.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,97512.13);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,102436.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,113743.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,109407.4);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,116365.1);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,119369.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,132372.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,121425.3);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,149845.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,149412.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,161657);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,132389.7);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,114316.6);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,86478.48);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,63250.45);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,69588.48);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,55306.76);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,50320.89);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,31182.79);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,25879.58);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,18201.89);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,2375.904);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,1580.176);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,0.4453776);
   VbbHcc_both_Z_dR_stack_1->SetEntries(482555);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,25.12823);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,32341.55);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,62616.04);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,75034.47);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,91553.68);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,106886.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,121239.4);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,135478.5);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,150365.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,165789.2);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,182874.1);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,200913.9);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,218737.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,234734.7);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,230185.8);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,120450.6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,68496.71);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,40347.21);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,23699.3);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,13624.03);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,7646.286);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,4094.005);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,2078.663);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,967.088);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,399.2205);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,135.9162);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,33.15929);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,1.188815);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,1.331664);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,47.7941);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,66.60734);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,72.99605);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,80.65616);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,87.17074);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,92.84604);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,98.1525);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,103.435);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,108.6372);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,114.1613);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,119.7134);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,125.021);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,129.5961);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,128.4368);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,92.91245);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,70.04938);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,53.74531);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,41.16452);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,31.19201);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,23.30004);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,17.02329);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,12.07662);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,8.222137);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,5.254954);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,3.058904);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.496611);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.2799582);
   VbbHcc_both_Z_dR_stack_2->SetEntries(3.456552e+07);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}

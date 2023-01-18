#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_18()
{
//=========Macro generated from canvas: Z_dR_seljet_18/Z_dR_seljet_18
//=========  (Wed Jan 18 11:40:27 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_18 = new TCanvas("Z_dR_seljet_18", "Z_dR_seljet_18",0,0,600,600);
   Z_dR_seljet_18->SetHighLightColor(2);
   Z_dR_seljet_18->Range(-1.310117,-10.15838,7.029799,74.49479);
   Z_dR_seljet_18->SetFillColor(0);
   Z_dR_seljet_18->SetFillStyle(4000);
   Z_dR_seljet_18->SetBorderMode(0);
   Z_dR_seljet_18->SetBorderSize(2);
   Z_dR_seljet_18->SetLeftMargin(0.15709);
   Z_dR_seljet_18->SetRightMargin(0.1234783);
   Z_dR_seljet_18->SetBottomMargin(0.12);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   Z_dR_seljet_18->SetFrameFillStyle(1000);
   Z_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(66.02947);
   
   TH1F *st_stack_275 = new TH1F("st_stack_275","",30,0,6);
   st_stack_275->SetMinimum(0);
   st_stack_275->SetMaximum(66.02947);
   st_stack_275->SetDirectory(0);
   st_stack_275->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_275->SetLineColor(ci);
   st_stack_275->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_275->GetXaxis()->SetRange(1,30);
   st_stack_275->GetXaxis()->SetLabelFont(42);
   st_stack_275->GetXaxis()->SetTitleOffset(1);
   st_stack_275->GetXaxis()->SetTitleFont(42);
   st_stack_275->GetYaxis()->SetTitle("Events/0.2");
   st_stack_275->GetYaxis()->SetLabelFont(42);
   st_stack_275->GetYaxis()->SetTitleSize(0.037);
   st_stack_275->GetYaxis()->SetTitleFont(42);
   st_stack_275->GetZaxis()->SetLabelFont(42);
   st_stack_275->GetZaxis()->SetTitleOffset(1);
   st_stack_275->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_275);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.009937328);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,7.659443);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,13.87929);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,15.26696);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,17.30295);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,19.45922);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,22.01507);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,23.54219);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,25.20061);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,27.01749);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,28.67776);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,30.69789);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,32.92575);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,35.25905);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,34.50268);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,15.67917);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,8.765202);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,5.456862);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,3.354387);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,2.368088);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,1.470689);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.010046);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.592417);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.333799);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.1432432);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.05260751);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,0.01555887);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.005042659);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.1432453);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.1912319);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.2012073);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.2128057);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.2266503);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.2408063);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.2502641);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.2575644);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.2703334);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.2766243);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.2851566);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.2953883);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.3071939);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.3045733);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.2044512);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.154565);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.1191669);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.09320246);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.08333648);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.06147757);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.0513874);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.03959824);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.02924451);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.01954942);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.01184741);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,0.005948386);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(165424);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.0006069075);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,1.857333);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,3.388017);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,3.925265);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,4.645148);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,5.197158);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,5.546944);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,6.022255);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,6.346564);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,6.918072);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,7.332555);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,7.780612);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,8.297978);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,8.760601);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,8.600901);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,4.475987);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,2.682353);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,1.692683);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,1.090882);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.7207883);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.4914101);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.3003273);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.1640285);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.09096616);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.04319548);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.01878867);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.005469865);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,0.0002849646);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.0004980953);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.02730956);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.03607469);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.03896397);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.04214572);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.04496164);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.04638686);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.04807795);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.04961314);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.05194845);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.05326432);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.0547523);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.05649605);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.05799758);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.05743028);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.04130332);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.03207351);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.02556704);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.02048705);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.01664877);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.01368112);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.01085313);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.00785829);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.005949941);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.004119007);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.002633837);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.001468529);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,0.0002849646);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(280952);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_seljet_18->Modified();
   Z_dR_seljet_18->cd();
   Z_dR_seljet_18->SetSelected(Z_dR_seljet_18);
}

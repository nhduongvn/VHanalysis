#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,-0.4704545,7.029799,3.45);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLeftMargin(0.15709);
   Z_dR_both_18->SetRightMargin(0.1234783);
   Z_dR_both_18->SetBottomMargin(0.12);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.057954);
   
   TH1F *st_stack_131 = new TH1F("st_stack_131","",30,0,6);
   st_stack_131->SetMinimum(0);
   st_stack_131->SetMaximum(3.057954);
   st_stack_131->SetDirectory(0);
   st_stack_131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_131->SetLineColor(ci);
   st_stack_131->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_131->GetXaxis()->SetRange(1,30);
   st_stack_131->GetXaxis()->SetLabelFont(42);
   st_stack_131->GetXaxis()->SetTitleOffset(1);
   st_stack_131->GetXaxis()->SetTitleFont(42);
   st_stack_131->GetYaxis()->SetTitle("Events/0.2");
   st_stack_131->GetYaxis()->SetLabelFont(42);
   st_stack_131->GetYaxis()->SetTitleSize(0.037);
   st_stack_131->GetYaxis()->SetTitleFont(42);
   st_stack_131->GetZaxis()->SetLabelFont(42);
   st_stack_131->GetZaxis()->SetTitleOffset(1);
   st_stack_131->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_131);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.5286101);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.8809496);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,1.236081);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,1.366297);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,1.391979);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,1.302367);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,1.195714);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,1.042759);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.8821305);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.8650981);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.8459928);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.8776779);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,1.054252);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.9266768);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.3360622);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.1438691);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.07873895);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.05369513);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.03081635);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.02134951);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.008623736);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.01430778);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,0.002061483);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.03738531);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.04804037);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.05806426);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.06121663);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.06192582);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.05860456);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.05658527);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.05246519);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.04805167);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.04729733);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.04740861);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.04722446);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.05218004);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.04960554);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.0307906);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.01925692);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.01391847);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.01174315);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.00821542);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.007391041);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.004433486);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.006074111);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,0.002061483);
   VbbHcc_both_Z_dR_stack_1->SetEntries(6741);

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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.2100096);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.4399446);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.6191987);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.6723395);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.5300981);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.3653661);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.2725963);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.2212271);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.1994356);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.1912376);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.1969178);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.2164097);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.2349633);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.2411863);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.1091652);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.0603579);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.03197363);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.01876568);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.01162959);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.006881893);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.003189459);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.002552287);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.002154006);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,0.0005905416);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.009105548);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.01293786);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.01534166);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.01615652);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.01428085);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.01179394);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.01020513);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.00915507);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.008790665);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.008501874);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.008663258);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.009075387);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.009421742);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.009611913);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.006498685);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.004758217);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.003423678);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.00264384);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.002065474);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.001642169);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.001114599);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0009818248);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0009406582);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,0.0004434206);
   VbbHcc_both_Z_dR_stack_2->SetEntries(14243);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}

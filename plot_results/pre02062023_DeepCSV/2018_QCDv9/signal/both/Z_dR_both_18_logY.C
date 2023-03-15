#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Wed Jan 18 11:42:15 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,0.5306814,7.029799,2.619138);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLogy();
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
   st->SetMinimum(10);
   st->SetMaximum(203.8366);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(6.043607);
   st_stack_147->SetMaximum(257.2125);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Events/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
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
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.2081842);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.4344408);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.6195754);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.6720692);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.5331886);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.3684387);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.2754132);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.221888);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.1981951);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.1901899);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.1972408);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.2160618);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.2361429);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.2401486);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.1077809);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.06244344);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.03152111);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.0183171);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.01162959);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.006064836);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.003189459);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.002552287);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.002154006);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,0.0006283153);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.00906426);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.01286016);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.01535179);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.01615349);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.01431886);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.01185388);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.01025025);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.009159557);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.008758163);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.008472331);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.008681708);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.009060346);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.009460723);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.009589724);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.006458712);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.00484866);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.003398583);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.002608327);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.002065474);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.001536201);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.001114599);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0009818248);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0009406582);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,0.0004450266);
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

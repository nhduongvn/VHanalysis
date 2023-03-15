#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Thu Mar  9 13:09:04 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-0.6722993,7.029799,4.930195);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.369945);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0);
   st_stack_20->SetMaximum(4.369945);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Event/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,1.579063);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,2.368831);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,2.379725);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,2.066873);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,1.458741);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,1.040975);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,0.8074417);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,0.6351736);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,0.5739811);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,0.6832896);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,0.7062967);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,0.8122182);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,1.036672);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,0.9308141);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,0.3699287);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,0.1571774);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,0.08363453);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,0.0395175);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,0.02746729);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,0.01207411);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,0.008122987);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,0.004869908);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,0.002358174);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,0.06611335);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,0.0774797);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,0.08201545);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,0.08394082);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,0.06061639);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,0.05113013);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,0.04496212);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,0.04409321);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,0.03742224);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,0.04153798);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,0.04311659);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,0.04509131);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,0.05168672);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,0.04906325);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,0.03037387);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,0.01952475);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,0.0170558);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,0.009646796);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,0.008505383);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,0.004957241);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,0.004714813);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,0.003469898);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,0.002358174);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,0.0005272769);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,0.5557498);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,1.155455);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,1.247329);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,1.02647);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,0.6597684);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,0.3708974);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,0.2512414);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,0.2160379);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,0.21863);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,0.2442321);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,0.2837978);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,0.3157997);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,0.3513958);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,0.3622696);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,0.1661105);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,0.06928193);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,0.04347477);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,0.02710852);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,0.01108065);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,0.009996944);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,0.00420834);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,0.002326871);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,0.001341284);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,0.0001839373);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,0.0006978566);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,0.0004046273);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,0.01407154);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,0.01957632);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,0.02029278);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,0.01927462);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,0.01453704);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,0.01107259);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,0.009018932);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,0.008285951);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,0.008410065);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,0.008856743);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,0.009624665);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,0.01026839);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,0.01069881);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,0.0116855);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,0.008163377);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,0.004621822);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,0.00376158);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,0.002934827);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,0.001822652);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,0.001725907);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,0.001092789);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,0.0008680677);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,0.0006993259);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,0.0001839373);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,0.0004946311);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}

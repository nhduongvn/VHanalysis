#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_alljet_all()
{
//=========Macro generated from canvas: Z_dR_alljet_all/Z_dR_alljet_all
//=========  (Tue Feb 14 15:57:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_alljet_all = new TCanvas("Z_dR_alljet_all", "Z_dR_alljet_all",0,0,600,600);
   Z_dR_alljet_all->SetHighLightColor(2);
   Z_dR_alljet_all->Range(-1.310117,-55.30557,7.029799,405.5742);
   Z_dR_alljet_all->SetFillColor(0);
   Z_dR_alljet_all->SetFillStyle(4000);
   Z_dR_alljet_all->SetBorderMode(0);
   Z_dR_alljet_all->SetBorderSize(2);
   Z_dR_alljet_all->SetLeftMargin(0.15709);
   Z_dR_alljet_all->SetRightMargin(0.1234783);
   Z_dR_alljet_all->SetBottomMargin(0.12);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   Z_dR_alljet_all->SetFrameFillStyle(1000);
   Z_dR_alljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(359.4862);
   
   TH1F *st_stack_212 = new TH1F("st_stack_212","",30,0,6);
   st_stack_212->SetMinimum(0);
   st_stack_212->SetMaximum(359.4862);
   st_stack_212->SetDirectory(0);
   st_stack_212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_212->SetLineColor(ci);
   st_stack_212->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_212->GetXaxis()->SetRange(1,30);
   st_stack_212->GetXaxis()->SetLabelFont(42);
   st_stack_212->GetXaxis()->SetTitleOffset(1);
   st_stack_212->GetXaxis()->SetTitleFont(42);
   st_stack_212->GetYaxis()->SetTitle("Events/0.2");
   st_stack_212->GetYaxis()->SetLabelFont(42);
   st_stack_212->GetYaxis()->SetTitleSize(0.037);
   st_stack_212->GetYaxis()->SetTitleFont(42);
   st_stack_212->GetZaxis()->SetLabelFont(42);
   st_stack_212->GetZaxis()->SetTitleOffset(1);
   st_stack_212->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_212);
   
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(2,0.0796148);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(3,43.56259);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(4,84.68471);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(5,87.88772);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(6,100.8868);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(7,113.8503);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(8,126.6872);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(9,140.5135);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(10,151.6531);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(11,161.8163);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(12,174.624);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(13,187.3102);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(14,197.6622);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(15,208.438);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(16,204.7142);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(17,123.4049);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(18,85.10276);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(19,63.17735);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(20,49.58603);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(21,40.0959);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(22,33.98481);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(23,29.3412);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(24,25.68677);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(25,22.25253);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(26,19.6651);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(27,17.22472);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(28,15.22764);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(29,13.11611);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(30,11.13638);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinContent(31,51.24387);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(2,0.01475386);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(3,0.3481089);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(4,0.5032548);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(5,0.5058699);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(6,0.5316638);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(7,0.5719209);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(8,0.5895085);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(9,0.6287719);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(10,0.64815);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(11,0.6736331);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(12,0.6991126);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(13,0.7374328);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(14,0.7500112);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(15,0.7631853);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(16,0.7655034);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(17,0.5813123);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(18,0.4819624);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(19,0.4220246);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(20,0.3660616);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(21,0.3261914);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(22,0.3010745);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(23,0.2799026);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(24,0.2599409);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(25,0.2412695);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(26,0.249169);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(27,0.2154029);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(28,0.2013954);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(29,0.2130696);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(30,0.172231);
   VbbHcc_alljet_Z_dR_all_stack_1->SetBinError(31,0.3753883);
   VbbHcc_alljet_Z_dR_all_stack_1->SetEntries(1193419);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_alljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(2,0.006304399);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(3,5.528226);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(4,10.27379);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(5,11.70827);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(6,14.30681);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(7,16.35718);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(8,18.00231);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(9,19.78094);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(10,21.5376);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(11,23.26945);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(12,25.17506);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(13,27.21871);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(14,29.07731);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(15,31.21949);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(16,31.13527);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(17,19.21453);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(18,13.50666);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(19,10.17888);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(20,8.114349);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(21,6.508919);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(22,5.381167);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(23,4.369833);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(24,3.614938);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(25,2.921637);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(26,2.426597);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(27,2.00678);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(28,1.638696);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(29,1.354221);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(30,1.075524);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinContent(31,3.647291);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(2,0.001426767);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(3,0.04399076);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(4,0.05893262);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(5,0.06437033);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(6,0.07011954);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(7,0.07461792);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(8,0.07835314);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(9,0.08413917);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(10,0.08716777);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(11,0.09099312);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(12,0.09343586);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(13,0.0977933);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(14,0.101659);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(15,0.1038359);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(16,0.1037083);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(17,0.0822885);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(18,0.06796979);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(19,0.05880753);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(20,0.05241125);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(21,0.04703923);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(22,0.0428121);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(23,0.0381226);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(24,0.03714933);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(25,0.03084682);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(26,0.02854542);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(27,0.02575205);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(28,0.02345497);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(29,0.02137049);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(30,0.01876023);
   VbbHcc_alljet_Z_dR_all_stack_2->SetBinError(31,0.03475306);
   VbbHcc_alljet_Z_dR_all_stack_2->SetEntries(1223268);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_dR_all_stack_1","ZHcc","F");

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
   Z_dR_alljet_all->Modified();
   Z_dR_alljet_all->cd();
   Z_dR_alljet_all->SetSelected(Z_dR_alljet_all);
}

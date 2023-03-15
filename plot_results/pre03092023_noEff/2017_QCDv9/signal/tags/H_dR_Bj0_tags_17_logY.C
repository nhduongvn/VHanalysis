#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(-1.310117,-0.1582334,7.029799,1.160378);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetFillStyle(4000);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetLogy();
   H_dR_Bj0_tags_17->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_17->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_17->SetBottomMargin(0.12);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_42 = new TH1F("st_stack_42","",30,0,6);
   st_stack_42->SetMinimum(-2.497198e+09);
   st_stack_42->SetMaximum(-0.9812987);
   st_stack_42->SetDirectory(0);
   st_stack_42->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_42->SetLineColor(ci);
   st_stack_42->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_42->GetXaxis()->SetRange(1,30);
   st_stack_42->GetXaxis()->SetLabelFont(42);
   st_stack_42->GetXaxis()->SetTitleOffset(1);
   st_stack_42->GetXaxis()->SetTitleFont(42);
   st_stack_42->GetYaxis()->SetTitle("Event/0.2");
   st_stack_42->GetYaxis()->SetLabelFont(42);
   st_stack_42->GetYaxis()->SetTitleSize(0.037);
   st_stack_42->GetYaxis()->SetTitleFont(42);
   st_stack_42->GetZaxis()->SetLabelFont(42);
   st_stack_42->GetZaxis()->SetTitleOffset(1);
   st_stack_42->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_42);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.1138436);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,0.5502442);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,0.6975712);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,0.5457797);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,0.4430972);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,0.3348342);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.2310356);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.1640687);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.137282);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.09933414);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.1104953);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.09263745);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.07143129);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.07143129);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.06361849);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.04687678);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.03125119);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.02567062);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.02009005);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.01339337);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.002232228);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.003348342);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.003348342);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,0.00558057);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.001116114);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.001116114);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.0112722);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.02478175);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.02790285);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.02468101);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.02223841);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.01933166);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.01605808);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.01353216);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.0123783);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.0105294);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.01110519);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.01016828);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.008928911);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.008928911);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.008426475);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.007233245);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.00590592);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.005352694);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.00473527);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.003866332);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.001578423);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.001933166);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.001933166);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,0.002495707);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.001116114);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.001116114);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.03621751);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.2211174);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.2819687);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.2480972);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.1873926);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.1309402);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.09237663);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.07052883);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.05571924);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.04604169);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.03827032);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.03841695);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.02991243);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.03240514);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.02712647);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.02595344);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.01568936);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.01055733);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.008944404);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.006598331);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.00351911);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.001319666);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.001759555);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.001026407);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.0005865183);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.001173037);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.0001466296);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,0.0001466296);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.002304465);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.005694063);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.006430004);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.00603145);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.005241879);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.004381747);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.003680373);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.003215838);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.002858337);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.002598283);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.002368873);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.002373407);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.002094289);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.002179805);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.001994378);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.00195078);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.001516748);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.001244193);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.001145214);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.0009836211);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.0007183353);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.0004398887);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.0005079398);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.0003879454);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0002932592);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0004147311);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0001466296);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.0001466296);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}

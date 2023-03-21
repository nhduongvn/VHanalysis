#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Mon Mar 20 11:48:15 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,-0.19666,1.171633,0.6284704);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15709);
   Aplanarity_tags_17->SetRightMargin(0.1234783);
   Aplanarity_tags_17->SetBottomMargin(0.12);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(3.193234);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0.7986485);
   st_stack_62->SetMaximum(3.515259);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("Aplanarity");
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Event/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1.895741);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1.336277);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.8140166);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.5515077);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.3612798);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.3268293);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.2044213);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.1454075);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.1054161);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.08681321);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.05855517);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.01704018);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.03917245);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.02035874);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.01409381);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.007755425);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.01003691);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.003914121);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,0.003248252);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.05966218);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.0499759);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.03943178);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.03295796);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.02583466);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.02500259);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.01979623);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.01667413);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.0144312);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.01304059);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.01030221);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.005529111);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.008470651);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.00619486);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.004627529);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.003904958);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.00449813);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.002768649);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,0.002358393);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.754643);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.5727543);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.369693);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.2523313);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.1864642);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.1266514);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.08142181);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.05758936);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.04479544);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.02884937);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.02147499);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.01339657);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.01051189);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.006461848);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.002611406);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.002348696);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.000978755);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.0001781248);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.0008215022);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0003777439);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,0.0004800258);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.01339843);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01175283);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.009433057);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.007807379);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.006738182);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.005530956);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.004465301);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.003755026);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.003340109);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.002646917);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.0022796);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.001816192);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.001620918);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.00126969);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.0007933594);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0007487945);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0004987727);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0001781248);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0004211047);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0002761903);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,0.0003412046);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}

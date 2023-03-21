#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Mon Mar 20 11:48:17 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2183529,-4.353837,1.171633,-0.5076831);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15709);
   Sphericity_algo_16->SetRightMargin(0.1234783);
   Sphericity_algo_16->SetBottomMargin(0.12);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.1531011);
   
   TH1F *st_stack_153 = new TH1F("st_stack_153","",25,0,1);
   st_stack_153->SetMinimum(1.687795);
   st_stack_153->SetMaximum(0.1281449);
   st_stack_153->SetDirectory(0);
   st_stack_153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_153->SetLineColor(ci);
   st_stack_153->GetXaxis()->SetTitle("Sphericity");
   st_stack_153->GetXaxis()->SetRange(1,25);
   st_stack_153->GetXaxis()->SetLabelFont(42);
   st_stack_153->GetXaxis()->SetTitleOffset(1);
   st_stack_153->GetXaxis()->SetTitleFont(42);
   st_stack_153->GetYaxis()->SetTitle("Event/0.04");
   st_stack_153->GetYaxis()->SetLabelFont(42);
   st_stack_153->GetYaxis()->SetTitleSize(0.037);
   st_stack_153->GetYaxis()->SetTitleFont(42);
   st_stack_153->GetZaxis()->SetLabelFont(42);
   st_stack_153->GetZaxis()->SetTitleOffset(1);
   st_stack_153->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_153);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.00255346);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.03999947);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.07044744);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.048924);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.07706601);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.08897875);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.09694218);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.06928187);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.05826755);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.06549073);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.05886882);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.0209408);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,0.05617488);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.03442455);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,0.0470421);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,0.04494069);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.03248456);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,0.02103877);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,0.01822473);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,0.005708934);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.00255346);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.01081265);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01415022);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.01259886);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.01507739);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01629843);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.01693717);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.01412564);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.01309214);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.01376923);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.01308322);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.007924958);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,0.01291186);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.01171193);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,0.01185648);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,0.01161529);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.009808203);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,0.007850041);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,0.007451178);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,0.004071839);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.002488076);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.01189666);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.02017642);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.02597957);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.02595359);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.03048144);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.03013173);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.02930901);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.02799679);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.01975368);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.02190331);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.02106628);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.01774914);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.01045104);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.008868919);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.01007675);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.00647324);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.008212075);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.001613791);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.002741931);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.0009477192);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.002119016);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.002741414);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.003160697);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.003127793);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.003411921);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.003389789);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.003353772);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.003313729);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.002775536);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.002935535);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.00286655);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.002594936);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.002017453);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.001832153);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.001984587);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.001572426);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.001761581);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.0008082331);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.001038303);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
